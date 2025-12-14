#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2734;
signed char var_2 = (signed char)67;
int var_9 = -364738956;
int zero = 0;
unsigned long long int var_16 = 148185207363958266ULL;
signed char var_17 = (signed char)-5;
short var_18 = (short)-23847;
signed char var_19 = (signed char)-107;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
