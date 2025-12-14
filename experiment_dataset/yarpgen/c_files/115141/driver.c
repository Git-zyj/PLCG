#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8711251339295592297ULL;
short var_2 = (short)14600;
unsigned short var_4 = (unsigned short)46955;
unsigned long long int var_6 = 9350944435757107314ULL;
signed char var_9 = (signed char)98;
unsigned char var_10 = (unsigned char)5;
int zero = 0;
unsigned long long int var_13 = 10097766699101723354ULL;
unsigned char var_14 = (unsigned char)29;
signed char var_15 = (signed char)-69;
short var_16 = (short)13299;
unsigned char arr_0 [21] [21] ;
long long int arr_1 [21] ;
short arr_2 [21] ;
unsigned long long int arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)43;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 1110800110590816828LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (short)-26721;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 4308238833165501400ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
