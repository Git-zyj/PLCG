#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1325787829;
signed char var_9 = (signed char)-98;
signed char var_11 = (signed char)113;
_Bool var_13 = (_Bool)0;
int zero = 0;
signed char var_15 = (signed char)81;
short var_16 = (short)-14246;
void init() {
}

void checksum() {
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
