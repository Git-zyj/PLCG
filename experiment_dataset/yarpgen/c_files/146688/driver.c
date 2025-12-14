#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16181514700645944559ULL;
int var_4 = -1856832619;
unsigned short var_8 = (unsigned short)8948;
int zero = 0;
signed char var_14 = (signed char)-78;
signed char var_15 = (signed char)54;
unsigned char var_16 = (unsigned char)50;
void init() {
}

void checksum() {
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
