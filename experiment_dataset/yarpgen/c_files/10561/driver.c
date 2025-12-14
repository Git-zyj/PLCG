#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2026390660;
unsigned int var_2 = 1122769303U;
unsigned int var_3 = 1212353956U;
unsigned char var_5 = (unsigned char)205;
int var_6 = -1441902634;
short var_10 = (short)-29687;
int zero = 0;
signed char var_14 = (signed char)-10;
signed char var_15 = (signed char)-113;
short var_16 = (short)678;
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
