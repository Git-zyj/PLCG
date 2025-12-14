#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 16594397829515634860ULL;
unsigned int var_13 = 3022678999U;
unsigned int var_14 = 1533521047U;
int zero = 0;
signed char var_18 = (signed char)-103;
short var_19 = (short)5846;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
