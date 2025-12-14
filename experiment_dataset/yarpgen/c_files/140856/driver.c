#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_11 = (short)-27258;
unsigned short var_14 = (unsigned short)2698;
int zero = 0;
unsigned int var_17 = 3740866316U;
short var_18 = (short)9423;
short var_19 = (short)-19513;
unsigned short var_20 = (unsigned short)59820;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
