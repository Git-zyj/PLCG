#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)23;
unsigned char var_2 = (unsigned char)161;
unsigned short var_4 = (unsigned short)36778;
unsigned char var_5 = (unsigned char)10;
int var_9 = -414390049;
int var_14 = 272410739;
unsigned long long int var_15 = 12064869541044876037ULL;
int zero = 0;
int var_16 = 1250558246;
long long int var_17 = -8048138802207629288LL;
signed char var_18 = (signed char)78;
unsigned int var_19 = 4185495806U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
