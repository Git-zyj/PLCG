#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)39271;
short var_8 = (short)14354;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_18 = 5537359828892387418LL;
unsigned short var_19 = (unsigned short)957;
long long int var_20 = -6369609842441140867LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
