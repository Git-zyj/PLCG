#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 2538075519U;
long long int var_4 = 5464655174164996970LL;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)119;
long long int var_8 = 7934363474483568522LL;
short var_10 = (short)31852;
int zero = 0;
unsigned int var_13 = 866891903U;
_Bool var_14 = (_Bool)1;
int var_15 = 1778634054;
unsigned char var_16 = (unsigned char)11;
short var_17 = (short)7271;
unsigned long long int var_18 = 7538279416669913197ULL;
unsigned short var_19 = (unsigned short)10272;
unsigned char var_20 = (unsigned char)6;
unsigned int arr_3 [23] [23] [23] ;
signed char arr_4 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 2302157187U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)65 : (signed char)-118;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
