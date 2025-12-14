#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)241;
unsigned char var_5 = (unsigned char)133;
long long int var_13 = -4740845451249331239LL;
int zero = 0;
unsigned char var_20 = (unsigned char)30;
short var_21 = (short)25823;
unsigned char var_22 = (unsigned char)60;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
