#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2858611413U;
unsigned short var_5 = (unsigned short)24046;
short var_13 = (short)11296;
short var_15 = (short)-17937;
int zero = 0;
long long int var_18 = -121342351479072130LL;
short var_19 = (short)-28537;
short var_20 = (short)-12475;
long long int var_21 = 1602909729522828291LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
