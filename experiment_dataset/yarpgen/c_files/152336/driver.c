#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 4056307963U;
unsigned long long int var_11 = 12560598774502706496ULL;
int zero = 0;
signed char var_15 = (signed char)-38;
long long int var_16 = 4773435078930511724LL;
int var_17 = 833621396;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
