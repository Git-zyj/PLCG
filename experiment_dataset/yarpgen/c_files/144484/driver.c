#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 4585996019817387563LL;
int var_9 = 748259782;
long long int var_10 = -2160953700996194261LL;
unsigned long long int var_13 = 267920233109116172ULL;
unsigned char var_15 = (unsigned char)115;
int zero = 0;
unsigned int var_17 = 4135253300U;
short var_18 = (short)7505;
unsigned long long int var_19 = 1990239062854029301ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
