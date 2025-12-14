#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)17113;
unsigned char var_8 = (unsigned char)162;
unsigned int var_9 = 3926885023U;
short var_11 = (short)915;
long long int var_15 = -2012013750017084508LL;
int zero = 0;
short var_18 = (short)4605;
signed char var_19 = (signed char)44;
signed char var_20 = (signed char)33;
void init() {
}

void checksum() {
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
