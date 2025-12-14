#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 510022618;
unsigned short var_4 = (unsigned short)31352;
long long int var_9 = -5145687989448783346LL;
unsigned int var_12 = 3617585770U;
int zero = 0;
unsigned int var_13 = 1525645262U;
int var_14 = 404430570;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
