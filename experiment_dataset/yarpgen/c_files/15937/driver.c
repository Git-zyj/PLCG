#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_5 = 4461046794970888217ULL;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 17639858294049291355ULL;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
int var_12 = -1401059352;
int zero = 0;
int var_13 = 711182734;
_Bool var_14 = (_Bool)0;
int var_15 = -753712656;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
