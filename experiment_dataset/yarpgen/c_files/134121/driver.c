#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10184;
unsigned int var_2 = 394265676U;
unsigned short var_6 = (unsigned short)28412;
short var_7 = (short)2099;
unsigned long long int var_10 = 2915617083689989740ULL;
unsigned int var_11 = 242668732U;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 5275806685393233577ULL;
unsigned char var_19 = (unsigned char)61;
unsigned long long int var_20 = 5424154569440707790ULL;
unsigned int var_21 = 3194670175U;
unsigned short arr_3 [11] ;
unsigned int arr_4 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned short)10655;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = 1642435310U;
}

void checksum() {
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
