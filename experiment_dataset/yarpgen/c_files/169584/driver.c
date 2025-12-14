#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11381;
unsigned long long int var_5 = 5379171614805724193ULL;
signed char var_13 = (signed char)48;
int zero = 0;
unsigned int var_19 = 2048454637U;
signed char var_20 = (signed char)-9;
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
