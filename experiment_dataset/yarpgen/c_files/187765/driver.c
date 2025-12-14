#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3437397614U;
unsigned int var_3 = 2197674729U;
unsigned char var_11 = (unsigned char)48;
int zero = 0;
unsigned char var_12 = (unsigned char)199;
unsigned char var_13 = (unsigned char)60;
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
