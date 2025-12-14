#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 205040289;
int var_5 = -793367288;
unsigned long long int var_7 = 17917197169236034619ULL;
int zero = 0;
int var_14 = 1079270751;
unsigned char var_15 = (unsigned char)1;
unsigned long long int var_16 = 6084013472732996785ULL;
unsigned long long int var_17 = 4027415671395457004ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
