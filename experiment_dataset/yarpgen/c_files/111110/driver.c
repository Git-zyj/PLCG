#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 126077252U;
long long int var_7 = -7586364194427196255LL;
int var_9 = -1640760056;
int zero = 0;
unsigned int var_11 = 1002071876U;
short var_12 = (short)-1280;
short var_13 = (short)11148;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
