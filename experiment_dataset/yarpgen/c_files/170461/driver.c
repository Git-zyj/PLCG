#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 3292822715493098529LL;
unsigned char var_8 = (unsigned char)5;
unsigned long long int var_9 = 9980575059312435129ULL;
int zero = 0;
long long int var_12 = -4962672586563233893LL;
unsigned char var_13 = (unsigned char)171;
unsigned int var_14 = 2490000895U;
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
