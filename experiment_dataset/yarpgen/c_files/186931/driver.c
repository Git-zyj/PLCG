#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11757;
short var_4 = (short)7510;
short var_6 = (short)10818;
short var_8 = (short)-12388;
unsigned long long int var_9 = 16215278291599782606ULL;
short var_11 = (short)27950;
int zero = 0;
int var_12 = -185090958;
short var_13 = (short)-19527;
unsigned long long int var_14 = 10709729592639622107ULL;
short var_15 = (short)-8390;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
