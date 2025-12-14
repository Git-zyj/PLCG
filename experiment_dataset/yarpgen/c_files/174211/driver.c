#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-58;
int var_1 = -422927693;
unsigned short var_2 = (unsigned short)31668;
unsigned char var_3 = (unsigned char)43;
unsigned int var_7 = 1729981783U;
int var_8 = 1867526279;
unsigned long long int var_9 = 2717715613661959247ULL;
unsigned char var_10 = (unsigned char)241;
unsigned long long int var_11 = 7149439163774378458ULL;
int zero = 0;
signed char var_13 = (signed char)-57;
short var_14 = (short)-25873;
short var_15 = (short)-20231;
short var_16 = (short)-23647;
signed char arr_6 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-45;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
