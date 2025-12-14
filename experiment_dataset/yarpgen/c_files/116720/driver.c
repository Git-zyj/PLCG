#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7450104490998316442LL;
_Bool var_5 = (_Bool)1;
unsigned char var_8 = (unsigned char)243;
int zero = 0;
short var_10 = (short)30362;
unsigned long long int var_11 = 7317447046555316559ULL;
unsigned int var_12 = 362543819U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
