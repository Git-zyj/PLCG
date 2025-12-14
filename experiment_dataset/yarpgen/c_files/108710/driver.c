#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1576576234;
short var_1 = (short)-13257;
unsigned char var_2 = (unsigned char)128;
int var_3 = 113263087;
short var_6 = (short)-8676;
unsigned int var_10 = 2882162479U;
short var_11 = (short)16063;
unsigned long long int var_12 = 12173192653355866313ULL;
unsigned long long int var_13 = 16182303266063581971ULL;
signed char var_14 = (signed char)-8;
unsigned long long int var_15 = 7063109598793773566ULL;
int zero = 0;
unsigned long long int var_17 = 12250923971403329143ULL;
unsigned char var_18 = (unsigned char)135;
unsigned char var_19 = (unsigned char)236;
int var_20 = -1027086962;
unsigned int var_21 = 6549164U;
short var_22 = (short)14058;
int var_23 = -793373258;
unsigned long long int var_24 = 12496344882859072718ULL;
signed char arr_0 [13] ;
signed char arr_2 [13] [13] ;
unsigned int arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (signed char)-52;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)90;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 2210606051U;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
