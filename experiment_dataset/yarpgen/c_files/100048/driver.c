#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)23;
short var_12 = (short)-11617;
unsigned int var_13 = 767952309U;
unsigned short var_14 = (unsigned short)35515;
long long int var_15 = -4495704405630472236LL;
unsigned long long int var_17 = 598843597632793786ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)58251;
unsigned long long int var_20 = 4537184871599244466ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
