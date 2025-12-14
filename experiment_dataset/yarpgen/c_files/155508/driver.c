#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-4363;
short var_10 = (short)-16294;
unsigned long long int var_12 = 7881363172534896506ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)67;
long long int var_17 = 428687025147578278LL;
long long int var_18 = -8355231557825318241LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
