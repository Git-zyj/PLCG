#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)28;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 2892279271U;
signed char var_16 = (signed char)-27;
int zero = 0;
unsigned short var_17 = (unsigned short)16024;
unsigned int var_18 = 591313662U;
int var_19 = 1881826042;
unsigned short var_20 = (unsigned short)16341;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
