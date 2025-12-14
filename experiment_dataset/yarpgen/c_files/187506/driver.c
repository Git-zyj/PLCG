#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1274866853;
signed char var_4 = (signed char)36;
signed char var_7 = (signed char)81;
unsigned int var_9 = 161624022U;
short var_10 = (short)29365;
unsigned int var_12 = 2644369430U;
int zero = 0;
short var_13 = (short)3773;
unsigned short var_14 = (unsigned short)49606;
long long int var_15 = 5162368715026379666LL;
unsigned short var_16 = (unsigned short)4468;
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
