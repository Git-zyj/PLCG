#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 150969978;
unsigned long long int var_2 = 12504236367014019140ULL;
short var_5 = (short)-31960;
short var_8 = (short)2567;
int zero = 0;
short var_13 = (short)7042;
signed char var_14 = (signed char)-24;
void init() {
}

void checksum() {
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
