#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20563;
unsigned short var_2 = (unsigned short)8014;
long long int var_7 = -5061924878655591731LL;
int var_9 = -1251248554;
unsigned short var_10 = (unsigned short)45146;
int zero = 0;
signed char var_12 = (signed char)-69;
unsigned int var_13 = 2669041699U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
