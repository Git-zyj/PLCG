#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23026;
unsigned long long int var_1 = 15029330549553948419ULL;
signed char var_2 = (signed char)-100;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)5;
_Bool var_6 = (_Bool)0;
int var_7 = 304840793;
unsigned char var_9 = (unsigned char)132;
unsigned short var_10 = (unsigned short)40718;
unsigned char var_11 = (unsigned char)114;
unsigned short var_12 = (unsigned short)20746;
int zero = 0;
unsigned short var_14 = (unsigned short)8516;
int var_15 = 1249007611;
long long int var_16 = -5330735232359462079LL;
unsigned int var_17 = 2364642816U;
long long int var_18 = -4251718241806767787LL;
unsigned char var_19 = (unsigned char)151;
unsigned char arr_1 [23] [23] ;
int arr_2 [23] [23] ;
long long int arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = -431525318;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 3688926966330426256LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
