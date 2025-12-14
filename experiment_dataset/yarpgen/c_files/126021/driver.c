#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 13901304156884502037ULL;
unsigned int var_9 = 4064435467U;
unsigned char var_13 = (unsigned char)30;
int zero = 0;
unsigned char var_14 = (unsigned char)165;
unsigned int var_15 = 804029541U;
unsigned int var_16 = 712131039U;
signed char var_17 = (signed char)69;
long long int var_18 = -8480989267112901883LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
