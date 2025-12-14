#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2524552405115401748LL;
unsigned long long int var_3 = 11297067178224079034ULL;
unsigned int var_4 = 1003187616U;
int var_7 = 120269106;
short var_9 = (short)-14280;
unsigned long long int var_10 = 18440603354717897984ULL;
int var_11 = -909907504;
int zero = 0;
unsigned short var_12 = (unsigned short)39229;
int var_13 = 1078238921;
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
