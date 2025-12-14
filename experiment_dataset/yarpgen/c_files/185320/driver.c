#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3910730932333008792LL;
unsigned int var_3 = 2220101288U;
unsigned int var_5 = 846887753U;
signed char var_6 = (signed char)-85;
int zero = 0;
unsigned char var_13 = (unsigned char)6;
int var_14 = -1677783667;
void init() {
}

void checksum() {
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
