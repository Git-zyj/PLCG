#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2031292736U;
unsigned int var_3 = 2885062070U;
unsigned int var_5 = 2258737783U;
unsigned long long int var_12 = 11310902710244992541ULL;
signed char var_13 = (signed char)106;
int zero = 0;
unsigned char var_14 = (unsigned char)68;
signed char var_15 = (signed char)-49;
unsigned char var_16 = (unsigned char)111;
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
