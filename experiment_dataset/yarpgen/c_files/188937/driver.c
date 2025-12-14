#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -948657245482698921LL;
long long int var_4 = -7891730037905045960LL;
long long int var_5 = -3793297382347841380LL;
unsigned long long int var_9 = 3300092712786296358ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)45953;
long long int var_16 = -7424832033351135209LL;
void init() {
}

void checksum() {
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
