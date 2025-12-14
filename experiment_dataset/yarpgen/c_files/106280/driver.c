#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-17309;
unsigned int var_8 = 2441644007U;
unsigned char var_17 = (unsigned char)142;
short var_18 = (short)13152;
int zero = 0;
unsigned int var_20 = 1907343650U;
unsigned long long int var_21 = 10953879042159457106ULL;
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
