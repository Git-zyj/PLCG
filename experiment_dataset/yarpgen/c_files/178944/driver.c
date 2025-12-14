#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1563524340530364098ULL;
unsigned int var_1 = 220169369U;
unsigned long long int var_3 = 4753592751217445802ULL;
unsigned int var_6 = 3533343151U;
unsigned short var_7 = (unsigned short)19059;
short var_8 = (short)-27080;
unsigned short var_10 = (unsigned short)23776;
int zero = 0;
unsigned short var_11 = (unsigned short)8465;
unsigned char var_12 = (unsigned char)62;
short var_13 = (short)16196;
short var_14 = (short)22941;
short var_15 = (short)-19889;
short var_16 = (short)8266;
unsigned int arr_1 [11] [11] ;
signed char arr_8 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 3389275870U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-22;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
