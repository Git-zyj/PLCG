#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-13410;
short var_4 = (short)17069;
unsigned short var_14 = (unsigned short)19151;
int zero = 0;
unsigned long long int var_16 = 7826493216340314397ULL;
unsigned long long int var_17 = 1461054926669520166ULL;
short var_18 = (short)7274;
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
