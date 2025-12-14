#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25758;
long long int var_1 = 7343533977395686428LL;
unsigned char var_8 = (unsigned char)191;
_Bool var_16 = (_Bool)1;
int zero = 0;
long long int var_20 = -2732143526847663443LL;
long long int var_21 = 2095639903857167182LL;
long long int var_22 = -8300033713545279739LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
