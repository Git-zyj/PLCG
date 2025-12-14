#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1358502227;
unsigned int var_4 = 3843201252U;
unsigned short var_5 = (unsigned short)41200;
short var_8 = (short)18297;
unsigned short var_14 = (unsigned short)16299;
short var_15 = (short)-12851;
int zero = 0;
signed char var_18 = (signed char)30;
int var_19 = 1133997479;
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
