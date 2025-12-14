#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3154318069U;
unsigned char var_8 = (unsigned char)213;
unsigned char var_10 = (unsigned char)117;
int zero = 0;
unsigned long long int var_19 = 13094605144726148581ULL;
unsigned char var_20 = (unsigned char)233;
void init() {
}

void checksum() {
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
