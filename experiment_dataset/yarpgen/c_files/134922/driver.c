#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)30;
unsigned char var_3 = (unsigned char)36;
unsigned char var_4 = (unsigned char)103;
unsigned char var_9 = (unsigned char)192;
unsigned char var_12 = (unsigned char)44;
unsigned char var_17 = (unsigned char)9;
int zero = 0;
unsigned char var_19 = (unsigned char)27;
unsigned char var_20 = (unsigned char)97;
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
