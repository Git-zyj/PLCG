#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-6204;
unsigned int var_9 = 1234660413U;
short var_12 = (short)-24783;
int var_14 = -1626615321;
short var_15 = (short)22086;
int zero = 0;
unsigned int var_16 = 3366901945U;
int var_17 = 739323755;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
