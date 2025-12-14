#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
int var_7 = 1210613400;
_Bool var_8 = (_Bool)1;
_Bool var_12 = (_Bool)1;
unsigned int var_14 = 4039150738U;
int var_15 = -44214344;
_Bool var_17 = (_Bool)0;
int zero = 0;
int var_18 = 2082320002;
int var_19 = -1540504556;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)160;
_Bool var_22 = (_Bool)1;
int var_23 = 840519727;
long long int var_24 = -2431298630819287190LL;
long long int var_25 = 4892359375067595696LL;
short var_26 = (short)-3044;
int var_27 = 295078429;
unsigned long long int var_28 = 17050748605098245484ULL;
unsigned long long int arr_1 [23] ;
_Bool arr_4 [25] ;
unsigned short arr_6 [25] ;
unsigned char arr_9 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 3303019957913607141ULL : 10479685865043548047ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (unsigned short)17389;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned char)3;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
