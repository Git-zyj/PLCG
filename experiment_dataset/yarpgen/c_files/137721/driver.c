#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)29806;
unsigned short var_5 = (unsigned short)37672;
unsigned long long int var_10 = 4612206086193231413ULL;
long long int var_13 = 1492376181359507866LL;
int zero = 0;
unsigned short var_19 = (unsigned short)19247;
short var_20 = (short)21248;
long long int var_21 = 2463346278641434543LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
