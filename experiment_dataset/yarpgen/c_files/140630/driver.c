#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -825249464;
_Bool var_3 = (_Bool)1;
long long int var_5 = 6047155346037884808LL;
short var_10 = (short)-7889;
int zero = 0;
short var_11 = (short)26200;
signed char var_12 = (signed char)100;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)1;
int var_15 = 555412437;
long long int var_16 = 6038289850279654974LL;
unsigned int var_17 = 4007829888U;
unsigned int var_18 = 685239981U;
short var_19 = (short)18723;
long long int var_20 = -7626755967126699786LL;
unsigned int var_21 = 3667213236U;
long long int var_22 = 9145916155951508409LL;
short var_23 = (short)26311;
short var_24 = (short)9922;
unsigned int arr_0 [13] ;
int arr_4 [13] [13] ;
short arr_8 [11] [11] [11] ;
signed char arr_19 [16] ;
short arr_21 [16] ;
signed char arr_5 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 4127143896U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 1604956700;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (short)-18586;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_19 [i_0] = (signed char)-97;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_21 [i_0] = (short)-15490;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)44;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
