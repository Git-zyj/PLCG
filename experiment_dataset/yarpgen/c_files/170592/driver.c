#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -9126237254248366889LL;
_Bool var_4 = (_Bool)0;
_Bool var_7 = (_Bool)0;
long long int var_9 = 8802754471862316652LL;
unsigned char var_10 = (unsigned char)163;
unsigned int var_12 = 1283655291U;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)86;
void init() {
}

void checksum() {
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
