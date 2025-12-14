#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)44793;
long long int var_3 = -504232005220943805LL;
signed char var_4 = (signed char)-109;
int zero = 0;
signed char var_12 = (signed char)28;
unsigned short var_13 = (unsigned short)7246;
int var_14 = -1768652500;
long long int var_15 = 3773857067105707055LL;
unsigned short var_16 = (unsigned short)56070;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
