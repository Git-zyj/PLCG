#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5324369743011954582LL;
unsigned short var_3 = (unsigned short)47431;
unsigned int var_4 = 3047237380U;
long long int var_5 = 539561735164188539LL;
long long int var_6 = -3893921658584166451LL;
unsigned long long int var_8 = 7677690831676942415ULL;
unsigned short var_9 = (unsigned short)54521;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)28564;
unsigned short var_14 = (unsigned short)21228;
long long int var_15 = -8583923267679006636LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
