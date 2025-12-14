#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -9120882323416167814LL;
unsigned char var_9 = (unsigned char)36;
unsigned char var_10 = (unsigned char)67;
unsigned int var_12 = 484980986U;
signed char var_14 = (signed char)-86;
unsigned long long int var_15 = 4793183140078817602ULL;
int zero = 0;
unsigned long long int var_17 = 9878614256758912277ULL;
unsigned int var_18 = 2391757356U;
short var_19 = (short)30312;
short var_20 = (short)-10089;
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
