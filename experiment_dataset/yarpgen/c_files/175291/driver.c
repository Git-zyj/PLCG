#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)26;
signed char var_3 = (signed char)-13;
signed char var_5 = (signed char)113;
int var_6 = 2145161272;
signed char var_8 = (signed char)-8;
unsigned int var_9 = 1440291807U;
int zero = 0;
unsigned int var_10 = 2515499519U;
unsigned char var_11 = (unsigned char)123;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
