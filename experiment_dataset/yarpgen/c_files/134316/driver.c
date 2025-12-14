#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-25920;
unsigned int var_2 = 1381155345U;
short var_7 = (short)4111;
unsigned int var_13 = 1180538612U;
int zero = 0;
unsigned int var_14 = 4172124671U;
unsigned int var_15 = 4020505703U;
void init() {
}

void checksum() {
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
