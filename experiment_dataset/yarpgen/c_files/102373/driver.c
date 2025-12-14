#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 364181824;
unsigned short var_2 = (unsigned short)40772;
unsigned char var_4 = (unsigned char)63;
signed char var_7 = (signed char)25;
int var_9 = 113480685;
int zero = 0;
short var_12 = (short)30041;
signed char var_13 = (signed char)-39;
signed char var_14 = (signed char)-115;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
