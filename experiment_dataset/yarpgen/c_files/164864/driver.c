#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8810027730856959899LL;
unsigned long long int var_3 = 4728260234991783019ULL;
unsigned short var_5 = (unsigned short)58672;
int zero = 0;
int var_10 = -1440291754;
int var_11 = 102924071;
unsigned int var_12 = 3241180230U;
int var_13 = 717581794;
int var_14 = -1937069012;
unsigned long long int arr_1 [16] ;
unsigned char arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 6321020412018829590ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned char)205;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
