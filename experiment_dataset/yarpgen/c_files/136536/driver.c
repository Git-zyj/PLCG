#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-99;
long long int var_3 = -2254035774218165861LL;
short var_7 = (short)-4092;
signed char var_11 = (signed char)67;
int zero = 0;
unsigned long long int var_12 = 12900335921854129372ULL;
unsigned char var_13 = (unsigned char)165;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
