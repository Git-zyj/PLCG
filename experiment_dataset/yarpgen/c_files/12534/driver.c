#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)186;
unsigned char var_9 = (unsigned char)39;
unsigned char var_10 = (unsigned char)23;
unsigned char var_13 = (unsigned char)237;
unsigned char var_16 = (unsigned char)135;
unsigned char var_18 = (unsigned char)88;
int zero = 0;
unsigned char var_19 = (unsigned char)127;
unsigned char var_20 = (unsigned char)189;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
