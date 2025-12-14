#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)9558;
unsigned short var_5 = (unsigned short)22270;
unsigned long long int var_6 = 3770093547269690419ULL;
unsigned int var_7 = 1260334736U;
int zero = 0;
unsigned char var_12 = (unsigned char)169;
unsigned int var_13 = 3574760181U;
void init() {
}

void checksum() {
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
