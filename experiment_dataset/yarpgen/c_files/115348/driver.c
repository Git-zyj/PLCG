#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1223232606U;
_Bool var_3 = (_Bool)1;
unsigned int var_5 = 1953440544U;
int zero = 0;
long long int var_13 = -2610970820110442694LL;
unsigned char var_14 = (unsigned char)87;
short var_15 = (short)-3769;
_Bool var_16 = (_Bool)0;
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
