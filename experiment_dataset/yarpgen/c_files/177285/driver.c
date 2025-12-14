#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3782485965U;
unsigned long long int var_10 = 8571104783120481555ULL;
unsigned char var_11 = (unsigned char)29;
int var_12 = -1147102258;
unsigned long long int var_14 = 4541972107998927879ULL;
int zero = 0;
short var_17 = (short)-4720;
long long int var_18 = 713831048257157261LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
