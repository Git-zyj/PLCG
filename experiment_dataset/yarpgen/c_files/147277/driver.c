#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)27694;
short var_2 = (short)-16897;
unsigned short var_3 = (unsigned short)56971;
unsigned long long int var_4 = 11194278045052881718ULL;
signed char var_6 = (signed char)44;
unsigned long long int var_8 = 10745625425044011398ULL;
unsigned char var_11 = (unsigned char)243;
signed char var_12 = (signed char)-76;
unsigned char var_13 = (unsigned char)85;
signed char var_14 = (signed char)-113;
unsigned long long int var_15 = 14345761775151800132ULL;
int zero = 0;
unsigned long long int var_17 = 14251814511340833870ULL;
unsigned short var_18 = (unsigned short)21419;
signed char var_19 = (signed char)-65;
unsigned short arr_0 [25] ;
unsigned long long int arr_1 [25] [25] ;
unsigned char arr_2 [25] ;
unsigned short arr_3 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned short)36636;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 3445584709453465004ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)7914;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
