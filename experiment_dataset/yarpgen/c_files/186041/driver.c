#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42635;
unsigned char var_9 = (unsigned char)40;
int zero = 0;
unsigned int var_13 = 3887518689U;
unsigned short var_14 = (unsigned short)41006;
unsigned char var_15 = (unsigned char)62;
unsigned int var_16 = 31161587U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
