#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)14576;
unsigned long long int var_3 = 10642532215363277399ULL;
short var_6 = (short)19694;
long long int var_9 = -6726758118498825312LL;
short var_12 = (short)24303;
unsigned long long int var_13 = 6437466172049713045ULL;
unsigned char var_15 = (unsigned char)186;
unsigned long long int var_16 = 14769462321398779861ULL;
int zero = 0;
unsigned int var_17 = 2587303884U;
int var_18 = -964545345;
short var_19 = (short)546;
short var_20 = (short)-23977;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
