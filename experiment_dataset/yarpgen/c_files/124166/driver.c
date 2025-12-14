#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
_Bool var_5 = (_Bool)1;
signed char var_10 = (signed char)19;
int var_11 = -1461875483;
long long int var_15 = -8127984161264734714LL;
_Bool var_18 = (_Bool)1;
int zero = 0;
short var_20 = (short)-12424;
short var_21 = (short)-20772;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
