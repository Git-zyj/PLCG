#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2076003320;
signed char var_6 = (signed char)25;
signed char var_8 = (signed char)75;
unsigned char var_9 = (unsigned char)41;
signed char var_10 = (signed char)105;
int zero = 0;
short var_13 = (short)4339;
unsigned short var_14 = (unsigned short)17369;
unsigned long long int var_15 = 13294840107563459501ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
