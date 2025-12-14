#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33125;
unsigned int var_1 = 3945766263U;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 3061416989U;
unsigned long long int var_4 = 3405069198342630875ULL;
unsigned int var_5 = 2020634100U;
long long int var_6 = 2675206168341402136LL;
signed char var_7 = (signed char)-9;
unsigned char var_8 = (unsigned char)181;
unsigned short var_9 = (unsigned short)4687;
unsigned long long int var_10 = 6697989122064914557ULL;
unsigned int var_11 = 475642353U;
unsigned long long int var_12 = 8251016753839409342ULL;
int zero = 0;
signed char var_13 = (signed char)-98;
unsigned int var_14 = 610250798U;
signed char var_15 = (signed char)35;
unsigned char arr_10 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)147 : (unsigned char)245;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
