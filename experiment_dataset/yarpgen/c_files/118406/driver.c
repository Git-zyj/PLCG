#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-69;
unsigned char var_4 = (unsigned char)125;
unsigned char var_5 = (unsigned char)139;
unsigned int var_7 = 2758497891U;
unsigned long long int var_10 = 6195960194504534334ULL;
unsigned int var_11 = 2068295991U;
int zero = 0;
unsigned int var_13 = 1490864990U;
unsigned int var_14 = 2684922278U;
unsigned short var_15 = (unsigned short)35928;
unsigned long long int var_16 = 1759907055451028973ULL;
unsigned short arr_0 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned short)35742;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
