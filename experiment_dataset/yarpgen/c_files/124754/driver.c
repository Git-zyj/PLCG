#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6333262254666478365LL;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)87;
unsigned int var_7 = 1962786288U;
unsigned long long int var_8 = 5457638092878292114ULL;
unsigned short var_11 = (unsigned short)49249;
int zero = 0;
_Bool var_13 = (_Bool)1;
int var_14 = 1004792571;
long long int var_15 = -5549677890696327314LL;
unsigned short var_16 = (unsigned short)18951;
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
