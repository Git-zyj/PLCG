#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
long long int var_5 = -8324221496590901064LL;
short var_7 = (short)-24275;
long long int var_8 = 7267219892093975511LL;
int var_10 = -108597072;
int zero = 0;
long long int var_13 = -5954326863480858633LL;
int var_14 = -1891695419;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
