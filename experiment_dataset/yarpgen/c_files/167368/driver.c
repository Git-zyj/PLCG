#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 616209988;
signed char var_1 = (signed char)69;
unsigned long long int var_5 = 15173097009462715009ULL;
short var_7 = (short)-5993;
int zero = 0;
unsigned long long int var_10 = 14367946234473321925ULL;
short var_11 = (short)-7096;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
