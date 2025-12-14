#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1871236958U;
unsigned int var_1 = 1017483233U;
unsigned char var_2 = (unsigned char)236;
unsigned long long int var_3 = 11287746560799008132ULL;
long long int var_7 = 4653314182392514514LL;
unsigned int var_8 = 1611580141U;
unsigned long long int var_9 = 7860117609837189929ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)138;
unsigned int var_12 = 1018948158U;
long long int var_13 = -3000012334693212148LL;
unsigned char var_14 = (unsigned char)233;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
