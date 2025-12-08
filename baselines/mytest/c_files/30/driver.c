#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 17934778714018349975ULL;
short var_6 = (short)26507;
short var_7 = (short)2761;
short var_14 = (short)-24378;
int zero = 0;
signed char var_17 = (signed char)-43;
long long int var_18 = 2189196804290813540LL;
int var_19 = -519676552;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
