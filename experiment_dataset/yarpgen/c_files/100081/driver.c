#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1947246497U;
unsigned long long int var_7 = 15150936506034868388ULL;
int var_10 = 1919161355;
signed char var_12 = (signed char)-125;
long long int var_13 = 2557911586995682894LL;
int zero = 0;
signed char var_15 = (signed char)-113;
short var_16 = (short)-26234;
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
