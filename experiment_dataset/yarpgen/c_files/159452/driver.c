#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2597013203538812061LL;
signed char var_2 = (signed char)-120;
unsigned int var_3 = 997751864U;
unsigned int var_8 = 241338600U;
int zero = 0;
int var_12 = 1852048680;
unsigned char var_13 = (unsigned char)55;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
