#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)61;
signed char var_8 = (signed char)-34;
unsigned int var_10 = 2107108049U;
unsigned long long int var_14 = 13538048244224519711ULL;
long long int var_15 = -1985565804789853168LL;
int zero = 0;
short var_18 = (short)16994;
short var_19 = (short)-5394;
void init() {
}

void checksum() {
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
