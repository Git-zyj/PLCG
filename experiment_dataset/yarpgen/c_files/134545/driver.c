#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3297137205461007603ULL;
unsigned int var_2 = 964716605U;
unsigned long long int var_5 = 1447181583235665204ULL;
int zero = 0;
unsigned long long int var_13 = 9766061030344154581ULL;
unsigned long long int var_14 = 15415230748887386231ULL;
unsigned long long int var_15 = 16344993575617752735ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
