#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14127;
signed char var_3 = (signed char)83;
signed char var_4 = (signed char)-13;
short var_5 = (short)4541;
short var_7 = (short)24413;
unsigned char var_8 = (unsigned char)254;
short var_9 = (short)-26380;
signed char var_12 = (signed char)81;
short var_14 = (short)22918;
int zero = 0;
short var_15 = (short)14427;
unsigned char var_16 = (unsigned char)0;
unsigned char var_17 = (unsigned char)189;
short var_18 = (short)-23523;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
