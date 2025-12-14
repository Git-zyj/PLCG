#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 578964383U;
unsigned char var_7 = (unsigned char)135;
_Bool var_8 = (_Bool)0;
int zero = 0;
signed char var_10 = (signed char)124;
long long int var_11 = -4090072326112664021LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
