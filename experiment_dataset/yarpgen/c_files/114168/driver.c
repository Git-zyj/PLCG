#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)848;
int var_1 = 309159396;
unsigned short var_2 = (unsigned short)14243;
unsigned long long int var_3 = 8165756924734960465ULL;
unsigned long long int var_4 = 1304743506726040756ULL;
short var_5 = (short)6794;
signed char var_6 = (signed char)91;
unsigned char var_7 = (unsigned char)203;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 17258829086607385128ULL;
unsigned short var_10 = (unsigned short)13131;
signed char var_11 = (signed char)9;
unsigned long long int var_12 = 16947515649476393935ULL;
int zero = 0;
int var_13 = 1144455118;
signed char var_14 = (signed char)-91;
long long int var_15 = 5087400444465404309LL;
signed char var_16 = (signed char)104;
int arr_3 [17] ;
unsigned long long int arr_4 [17] ;
short arr_17 [17] [17] [17] [17] ;
unsigned long long int arr_18 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = -1216347333;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 2137672637746645910ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)1815 : (short)6814;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_18 [i_0] = 10210935482637992773ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
