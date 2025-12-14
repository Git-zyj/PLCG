#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2608602398174488776LL;
_Bool var_2 = (_Bool)0;
long long int var_3 = 1530650738782529723LL;
signed char var_4 = (signed char)56;
int var_5 = 1304694518;
unsigned long long int var_6 = 11976556566712371555ULL;
unsigned int var_7 = 4070494683U;
_Bool var_10 = (_Bool)0;
unsigned int var_12 = 4178330377U;
signed char var_13 = (signed char)-126;
int zero = 0;
unsigned long long int var_14 = 3692269451577393356ULL;
int var_15 = 1498239723;
short var_16 = (short)9194;
unsigned char var_17 = (unsigned char)35;
unsigned long long int var_18 = 11701682350412507384ULL;
signed char var_19 = (signed char)-97;
long long int var_20 = 1887083987696499939LL;
unsigned char var_21 = (unsigned char)123;
unsigned long long int arr_0 [19] ;
int arr_1 [19] ;
unsigned int arr_2 [19] ;
signed char arr_3 [16] ;
short arr_4 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 8629524440173481416ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = -1263189071;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 72509390U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (signed char)65;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (short)2694;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
