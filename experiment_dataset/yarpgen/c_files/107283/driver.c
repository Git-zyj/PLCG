#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)140;
unsigned short var_4 = (unsigned short)46458;
unsigned long long int var_5 = 3343983173224388542ULL;
signed char var_9 = (signed char)96;
signed char var_12 = (signed char)61;
unsigned int var_14 = 160209239U;
int zero = 0;
signed char var_16 = (signed char)-15;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
