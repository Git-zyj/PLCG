#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)107;
unsigned int var_5 = 1787147055U;
unsigned long long int var_11 = 3920793522038226618ULL;
unsigned long long int var_12 = 14572089263668673811ULL;
unsigned int var_13 = 332723489U;
int zero = 0;
unsigned short var_14 = (unsigned short)61433;
int var_15 = -330421180;
unsigned int var_16 = 4234574027U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
