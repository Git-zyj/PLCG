#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)15328;
unsigned short var_7 = (unsigned short)41986;
unsigned short var_8 = (unsigned short)1606;
unsigned int var_11 = 1788768376U;
int var_13 = 1009772742;
int zero = 0;
int var_14 = 1831444219;
unsigned short var_15 = (unsigned short)54375;
void init() {
}

void checksum() {
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
