#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-101;
int var_4 = 1392267618;
short var_5 = (short)20295;
unsigned short var_6 = (unsigned short)39796;
int zero = 0;
short var_10 = (short)11422;
unsigned long long int var_11 = 8223486196817158244ULL;
unsigned char var_12 = (unsigned char)10;
unsigned int var_13 = 3070764655U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
