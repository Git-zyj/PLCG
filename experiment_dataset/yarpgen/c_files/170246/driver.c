#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2439127076U;
unsigned short var_1 = (unsigned short)40482;
unsigned char var_8 = (unsigned char)160;
unsigned int var_9 = 195768741U;
int zero = 0;
unsigned char var_12 = (unsigned char)164;
signed char var_13 = (signed char)125;
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
