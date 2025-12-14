#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3082368805794908710LL;
signed char var_1 = (signed char)66;
long long int var_5 = 8943218239346500246LL;
short var_7 = (short)26539;
long long int var_9 = -4314531218137031840LL;
unsigned char var_10 = (unsigned char)229;
unsigned long long int var_11 = 13333566195930875608ULL;
unsigned long long int var_12 = 12736560548403540770ULL;
unsigned int var_14 = 1482188485U;
int zero = 0;
unsigned long long int var_15 = 15418481093929437900ULL;
unsigned long long int var_16 = 576630444913500889ULL;
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
