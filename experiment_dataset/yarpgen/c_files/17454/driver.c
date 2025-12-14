#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1560291192;
long long int var_7 = -6899445558463141097LL;
unsigned int var_10 = 1355867763U;
short var_12 = (short)-27339;
unsigned long long int var_13 = 5715503627358593946ULL;
int zero = 0;
short var_19 = (short)15313;
unsigned long long int var_20 = 9225245823378056136ULL;
void init() {
}

void checksum() {
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
