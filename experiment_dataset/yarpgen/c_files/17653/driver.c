#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)7;
short var_2 = (short)21285;
unsigned short var_4 = (unsigned short)61033;
unsigned long long int var_7 = 6421506559761666343ULL;
short var_8 = (short)-29450;
unsigned char var_10 = (unsigned char)29;
unsigned char var_11 = (unsigned char)123;
unsigned char var_12 = (unsigned char)33;
int zero = 0;
unsigned int var_13 = 3195418478U;
int var_14 = 1954230997;
unsigned short var_15 = (unsigned short)46647;
unsigned short var_16 = (unsigned short)52957;
unsigned short var_17 = (unsigned short)28163;
unsigned short arr_2 [18] ;
unsigned int arr_3 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned short)35916;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 308042414U : 948755129U;
}

void checksum() {
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
