#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1391833659;
_Bool var_7 = (_Bool)0;
long long int var_9 = 7376042325274907454LL;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 3587062558U;
unsigned int var_16 = 35267939U;
void init() {
}

void checksum() {
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
