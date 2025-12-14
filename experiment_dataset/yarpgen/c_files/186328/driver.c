#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)19;
unsigned char var_1 = (unsigned char)194;
signed char var_3 = (signed char)103;
unsigned long long int var_5 = 15044656962000815796ULL;
unsigned short var_6 = (unsigned short)34173;
signed char var_7 = (signed char)-68;
int var_8 = -937679670;
signed char var_11 = (signed char)74;
unsigned int var_12 = 968957990U;
int zero = 0;
unsigned char var_15 = (unsigned char)140;
unsigned int var_16 = 3144145488U;
signed char var_17 = (signed char)105;
unsigned long long int var_18 = 3000404650553441454ULL;
short var_19 = (short)29400;
unsigned int var_20 = 1996070205U;
unsigned short arr_0 [15] [15] ;
unsigned short arr_1 [15] ;
unsigned long long int arr_2 [15] ;
unsigned char arr_4 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)8870;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)58319;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 12869334791694584760ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)132;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
