#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2366576022U;
int var_5 = 419438744;
unsigned int var_6 = 3157707957U;
signed char var_15 = (signed char)-60;
int zero = 0;
short var_16 = (short)19274;
signed char var_17 = (signed char)-55;
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
