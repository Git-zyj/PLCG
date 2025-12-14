#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -7484947864296399968LL;
long long int var_7 = 8512232599381762592LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_20 = -7557176699704580829LL;
unsigned long long int var_21 = 13965976066110201069ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
