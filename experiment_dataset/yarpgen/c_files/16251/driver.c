#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)92;
unsigned int var_4 = 805200988U;
unsigned char var_7 = (unsigned char)30;
unsigned int var_9 = 932222197U;
int zero = 0;
unsigned char var_11 = (unsigned char)39;
long long int var_12 = 8103521965637523205LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
