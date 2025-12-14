#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)203;
int var_5 = 1748368321;
short var_7 = (short)-4366;
long long int var_10 = 6256798971034839126LL;
signed char var_16 = (signed char)-58;
int zero = 0;
unsigned char var_17 = (unsigned char)241;
unsigned char var_18 = (unsigned char)140;
signed char var_19 = (signed char)-70;
unsigned int arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 2053713392U;
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
