#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-23787;
unsigned char var_5 = (unsigned char)214;
unsigned char var_7 = (unsigned char)149;
unsigned short var_9 = (unsigned short)47631;
unsigned int var_10 = 2288769988U;
int zero = 0;
int var_13 = 557113688;
unsigned long long int var_14 = 1997332973148704550ULL;
unsigned short var_15 = (unsigned short)49355;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
