#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)43;
signed char var_4 = (signed char)6;
signed char var_5 = (signed char)11;
unsigned char var_6 = (unsigned char)231;
unsigned char var_8 = (unsigned char)31;
signed char var_9 = (signed char)-52;
unsigned char var_10 = (unsigned char)56;
signed char var_12 = (signed char)79;
int zero = 0;
unsigned char var_13 = (unsigned char)83;
unsigned char var_14 = (unsigned char)90;
signed char var_15 = (signed char)-26;
signed char var_16 = (signed char)113;
void init() {
}

void checksum() {
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
