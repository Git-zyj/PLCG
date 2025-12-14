#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)19845;
short var_10 = (short)6900;
short var_11 = (short)-1100;
unsigned long long int var_15 = 7968475871866399157ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)239;
unsigned char var_18 = (unsigned char)55;
unsigned short var_19 = (unsigned short)43855;
int arr_0 [16] ;
unsigned long long int arr_1 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 1098620794;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 3731881003579756367ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
