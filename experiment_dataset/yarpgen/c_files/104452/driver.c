#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-8;
unsigned long long int var_14 = 6923522019304505452ULL;
signed char var_15 = (signed char)38;
int zero = 0;
int var_16 = 1522154180;
int var_17 = -596660128;
unsigned long long int var_18 = 7666570194906887392ULL;
unsigned short var_19 = (unsigned short)31116;
unsigned long long int var_20 = 7877937524475638505ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
