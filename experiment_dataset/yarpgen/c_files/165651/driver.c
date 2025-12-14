#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)37573;
unsigned char var_4 = (unsigned char)192;
int var_5 = -879657284;
int zero = 0;
unsigned short var_13 = (unsigned short)61705;
short var_14 = (short)22435;
signed char var_15 = (signed char)-14;
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
