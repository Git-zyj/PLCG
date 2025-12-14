#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12980244328231262721ULL;
short var_2 = (short)-17946;
unsigned short var_3 = (unsigned short)42030;
signed char var_5 = (signed char)-65;
int zero = 0;
short var_13 = (short)-18601;
long long int var_14 = -4099000667948717198LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
