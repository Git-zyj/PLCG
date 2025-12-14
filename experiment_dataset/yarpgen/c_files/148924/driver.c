#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)124;
long long int var_1 = 1400494463372094889LL;
signed char var_2 = (signed char)-5;
signed char var_3 = (signed char)-99;
unsigned short var_4 = (unsigned short)64059;
signed char var_5 = (signed char)92;
unsigned short var_6 = (unsigned short)43062;
long long int var_7 = -4917549425403173827LL;
short var_8 = (short)-28044;
signed char var_9 = (signed char)2;
short var_10 = (short)9938;
signed char var_11 = (signed char)-43;
long long int var_13 = 4051853946841419020LL;
signed char var_14 = (signed char)-102;
long long int var_15 = 2653589224082596881LL;
int zero = 0;
long long int var_17 = 4252568673838066314LL;
unsigned int var_18 = 1949609448U;
long long int var_19 = -1726408661026166168LL;
signed char var_20 = (signed char)34;
unsigned long long int arr_16 [13] [13] [13] [13] ;
int arr_17 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 7585503921955071085ULL : 4757634784790700590ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -916039232 : 686538158;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
