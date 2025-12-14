#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)92;
int var_7 = 1819346203;
signed char var_15 = (signed char)-103;
unsigned short var_16 = (unsigned short)60563;
unsigned long long int var_17 = 14800654357434107482ULL;
unsigned long long int var_18 = 2170607121097525664ULL;
int zero = 0;
int var_20 = 26608260;
long long int var_21 = -4445609809281233955LL;
void init() {
}

void checksum() {
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
