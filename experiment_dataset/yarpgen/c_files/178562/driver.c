#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_3 = 484390262;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 4471216332191891930ULL;
unsigned long long int var_14 = 8509071294197841539ULL;
int zero = 0;
unsigned long long int var_19 = 8717812902672034187ULL;
int var_20 = -1840727215;
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
