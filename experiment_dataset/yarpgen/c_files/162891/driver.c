#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1615168916U;
signed char var_10 = (signed char)10;
short var_17 = (short)-29597;
int zero = 0;
unsigned char var_18 = (unsigned char)180;
int var_19 = 1666229197;
unsigned long long int var_20 = 6505693044717794766ULL;
int var_21 = 1490014295;
short var_22 = (short)-20255;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
