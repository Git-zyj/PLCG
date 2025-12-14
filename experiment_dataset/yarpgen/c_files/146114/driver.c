#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)183;
unsigned int var_5 = 260440876U;
unsigned char var_9 = (unsigned char)21;
unsigned int var_14 = 2568658638U;
int zero = 0;
unsigned char var_17 = (unsigned char)137;
unsigned char var_18 = (unsigned char)237;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
