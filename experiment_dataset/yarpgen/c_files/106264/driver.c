#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)19601;
unsigned char var_3 = (unsigned char)236;
unsigned char var_4 = (unsigned char)166;
long long int var_6 = 5530499923437445446LL;
unsigned char var_8 = (unsigned char)73;
unsigned short var_12 = (unsigned short)31022;
long long int var_13 = 3045507307551601751LL;
int zero = 0;
unsigned short var_17 = (unsigned short)9750;
unsigned char var_18 = (unsigned char)246;
unsigned char var_19 = (unsigned char)167;
unsigned short var_20 = (unsigned short)35938;
unsigned short var_21 = (unsigned short)58293;
unsigned short arr_2 [12] ;
unsigned char arr_3 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned short)9049;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)91;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
