#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)27338;
unsigned char var_4 = (unsigned char)245;
signed char var_10 = (signed char)90;
short var_11 = (short)32257;
int zero = 0;
unsigned short var_12 = (unsigned short)61038;
unsigned char var_13 = (unsigned char)244;
unsigned int var_14 = 3776237329U;
void init() {
}

void checksum() {
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
