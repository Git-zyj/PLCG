#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 261460340U;
long long int var_1 = -447185854069028341LL;
unsigned char var_5 = (unsigned char)127;
signed char var_7 = (signed char)26;
unsigned char var_8 = (unsigned char)178;
int zero = 0;
short var_10 = (short)-11623;
unsigned short var_11 = (unsigned short)53126;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
