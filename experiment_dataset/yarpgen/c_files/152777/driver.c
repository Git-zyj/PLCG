#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)44690;
unsigned short var_2 = (unsigned short)23164;
unsigned long long int var_3 = 14378724227071034536ULL;
signed char var_6 = (signed char)-4;
unsigned long long int var_11 = 4494054785494328557ULL;
signed char var_12 = (signed char)-12;
int zero = 0;
unsigned short var_14 = (unsigned short)63049;
unsigned short var_15 = (unsigned short)45061;
unsigned short var_16 = (unsigned short)42598;
void init() {
}

void checksum() {
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
