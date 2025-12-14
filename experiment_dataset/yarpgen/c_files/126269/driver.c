#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12057815115209425221ULL;
signed char var_8 = (signed char)-84;
unsigned short var_9 = (unsigned short)63635;
unsigned short var_10 = (unsigned short)63893;
short var_16 = (short)3075;
signed char var_17 = (signed char)-87;
signed char var_18 = (signed char)66;
int zero = 0;
signed char var_19 = (signed char)105;
unsigned short var_20 = (unsigned short)10368;
int var_21 = -1443391712;
signed char var_22 = (signed char)44;
unsigned long long int var_23 = 5538852652502304312ULL;
signed char arr_0 [16] ;
unsigned char arr_1 [16] ;
int arr_2 [16] ;
int arr_3 [16] ;
unsigned long long int arr_4 [16] ;
signed char arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (signed char)-29;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned char)22;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 1469434787;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 1138168229;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 17178850359174911265ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (signed char)-66;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
