#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4299750212873850659LL;
long long int var_1 = -4983283400473209923LL;
int var_2 = -1651051860;
unsigned short var_3 = (unsigned short)54128;
long long int var_4 = -6989599319221147665LL;
int var_5 = 1026916906;
int var_6 = 1739084664;
unsigned long long int var_7 = 2112501312813662316ULL;
signed char var_8 = (signed char)38;
signed char var_9 = (signed char)-81;
int zero = 0;
unsigned short var_11 = (unsigned short)18112;
_Bool var_12 = (_Bool)1;
short var_13 = (short)24578;
short var_14 = (short)27610;
unsigned int var_15 = 912629204U;
unsigned long long int var_16 = 14148878142614288359ULL;
unsigned short arr_10 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)10407 : (unsigned short)60787;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
