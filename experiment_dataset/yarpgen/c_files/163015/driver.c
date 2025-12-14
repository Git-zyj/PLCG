#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1142755170U;
_Bool var_12 = (_Bool)0;
int var_13 = -1896876149;
int zero = 0;
signed char var_19 = (signed char)(-127 - 1);
long long int var_20 = 4106886084572932049LL;
void init() {
}

void checksum() {
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
