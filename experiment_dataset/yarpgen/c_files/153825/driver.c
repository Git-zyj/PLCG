#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 48705646932482716ULL;
signed char var_7 = (signed char)44;
short var_11 = (short)-13764;
unsigned long long int var_12 = 17013113507123711920ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)141;
unsigned long long int var_15 = 7322341446008478905ULL;
int var_16 = -992519544;
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
