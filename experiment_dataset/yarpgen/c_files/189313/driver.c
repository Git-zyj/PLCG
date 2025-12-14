#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1524784293011014824ULL;
unsigned short var_3 = (unsigned short)23282;
_Bool var_9 = (_Bool)0;
short var_11 = (short)-32588;
short var_15 = (short)19570;
int zero = 0;
long long int var_17 = 2735305892909053216LL;
unsigned char var_18 = (unsigned char)26;
int var_19 = -1147106599;
short var_20 = (short)-8634;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-657;
unsigned long long int var_23 = 6607404163037438515ULL;
unsigned int var_24 = 778862701U;
unsigned long long int var_25 = 15639447811293604981ULL;
unsigned char var_26 = (unsigned char)144;
short arr_1 [21] ;
short arr_2 [21] [21] ;
unsigned short arr_4 [16] ;
signed char arr_5 [16] [16] ;
unsigned long long int arr_6 [16] ;
_Bool arr_13 [15] [15] [15] ;
unsigned long long int arr_3 [21] ;
long long int arr_7 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (short)3436;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-25429;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (unsigned short)37376;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-87;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 7327085103719588027ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 12689463986260360732ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = -4261781051948831516LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
