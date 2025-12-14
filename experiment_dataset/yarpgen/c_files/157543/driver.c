#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)15222;
signed char var_5 = (signed char)-69;
signed char var_9 = (signed char)-5;
unsigned long long int var_11 = 5124500883216626137ULL;
unsigned short var_12 = (unsigned short)44162;
int zero = 0;
unsigned short var_16 = (unsigned short)19471;
short var_17 = (short)14653;
short var_18 = (short)-3642;
unsigned long long int var_19 = 1625367847303991585ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
