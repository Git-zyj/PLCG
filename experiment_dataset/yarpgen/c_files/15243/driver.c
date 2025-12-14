#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)16436;
unsigned int var_3 = 753065175U;
signed char var_5 = (signed char)-47;
unsigned char var_10 = (unsigned char)188;
int var_11 = 1469405368;
int var_12 = -36895053;
int zero = 0;
unsigned char var_14 = (unsigned char)88;
unsigned long long int var_15 = 4966287594721869652ULL;
long long int var_16 = 471347861610157126LL;
unsigned short var_17 = (unsigned short)53881;
unsigned long long int arr_1 [13] ;
long long int arr_5 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 17832086536367015514ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = -6330263828052032480LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
