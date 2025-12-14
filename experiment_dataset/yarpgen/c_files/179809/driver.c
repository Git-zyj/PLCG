#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1913696081;
unsigned short var_9 = (unsigned short)29953;
unsigned long long int var_10 = 4760093788859205139ULL;
int var_11 = 1206662244;
int zero = 0;
short var_12 = (short)-8333;
unsigned long long int var_13 = 4850509306535433755ULL;
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
