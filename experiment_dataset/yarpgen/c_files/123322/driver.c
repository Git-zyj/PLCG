#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17159;
unsigned short var_1 = (unsigned short)53071;
unsigned long long int var_8 = 17736972396859203245ULL;
int zero = 0;
long long int var_12 = 2854706758682085673LL;
int var_13 = -129946321;
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
