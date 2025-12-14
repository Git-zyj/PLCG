#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10829;
unsigned int var_6 = 3865972339U;
unsigned short var_10 = (unsigned short)38100;
int zero = 0;
long long int var_12 = 6348455220300200656LL;
unsigned long long int var_13 = 5547782455800043537ULL;
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
