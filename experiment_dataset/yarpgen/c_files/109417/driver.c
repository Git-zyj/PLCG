#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-24361;
unsigned short var_7 = (unsigned short)52073;
unsigned long long int var_10 = 4715991543331901946ULL;
int zero = 0;
short var_13 = (short)-7322;
unsigned long long int var_14 = 5231652516985986867ULL;
unsigned long long int var_15 = 6173795367416289623ULL;
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
