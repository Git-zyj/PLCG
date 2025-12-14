#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)27446;
unsigned short var_11 = (unsigned short)2534;
int zero = 0;
unsigned long long int var_18 = 5213252903364605210ULL;
short var_19 = (short)-22497;
unsigned long long int var_20 = 14818053693949872198ULL;
unsigned long long int var_21 = 15176651858733851015ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
