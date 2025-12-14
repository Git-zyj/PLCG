#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1069276169;
unsigned char var_11 = (unsigned char)113;
int zero = 0;
int var_17 = 1356390230;
unsigned char var_18 = (unsigned char)99;
short var_19 = (short)32278;
signed char var_20 = (signed char)-51;
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
