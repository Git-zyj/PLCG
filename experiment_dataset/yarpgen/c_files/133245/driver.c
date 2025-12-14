#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)37090;
short var_7 = (short)7226;
unsigned short var_8 = (unsigned short)52033;
short var_9 = (short)19973;
unsigned int var_10 = 2963544261U;
int zero = 0;
unsigned int var_11 = 1489287762U;
short var_12 = (short)-22307;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
