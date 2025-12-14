#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)127;
unsigned int var_9 = 2127655005U;
unsigned char var_17 = (unsigned char)228;
int zero = 0;
unsigned char var_20 = (unsigned char)19;
unsigned int var_21 = 2000382358U;
unsigned char var_22 = (unsigned char)153;
unsigned int var_23 = 1789353625U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
