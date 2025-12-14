#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)79;
unsigned char var_9 = (unsigned char)102;
unsigned char var_14 = (unsigned char)95;
int zero = 0;
unsigned short var_17 = (unsigned short)38593;
short var_18 = (short)-26919;
short var_19 = (short)-1421;
void init() {
}

void checksum() {
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
