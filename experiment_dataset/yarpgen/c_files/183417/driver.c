#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-6729;
unsigned int var_3 = 2913146720U;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
_Bool var_13 = (_Bool)0;
int zero = 0;
long long int var_15 = -8143713213619447457LL;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
