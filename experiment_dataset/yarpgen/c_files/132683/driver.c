#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 442244995U;
unsigned short var_1 = (unsigned short)41199;
unsigned char var_8 = (unsigned char)104;
int var_9 = 1261811418;
int zero = 0;
unsigned short var_10 = (unsigned short)46625;
unsigned char var_11 = (unsigned char)166;
signed char var_12 = (signed char)(-127 - 1);
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
