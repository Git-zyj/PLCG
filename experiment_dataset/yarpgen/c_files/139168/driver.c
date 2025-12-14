#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)131;
short var_2 = (short)-31604;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 1557868403U;
unsigned char var_6 = (unsigned char)23;
unsigned short var_7 = (unsigned short)49171;
unsigned int var_8 = 4287527623U;
unsigned short var_9 = (unsigned short)45499;
int zero = 0;
unsigned int var_11 = 183220583U;
short var_12 = (short)-9873;
short var_13 = (short)31853;
unsigned char var_14 = (unsigned char)225;
unsigned int var_15 = 3913752437U;
unsigned char var_16 = (unsigned char)30;
unsigned char var_17 = (unsigned char)242;
unsigned char arr_0 [21] [21] ;
unsigned int arr_1 [21] ;
short arr_3 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)121;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 2298929945U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-16635;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
