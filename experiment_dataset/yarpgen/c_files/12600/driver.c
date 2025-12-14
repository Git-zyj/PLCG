#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -5914243726683340184LL;
unsigned int var_9 = 4106305690U;
short var_11 = (short)8233;
short var_12 = (short)-26409;
int zero = 0;
short var_20 = (short)-23826;
unsigned int var_21 = 609847573U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
