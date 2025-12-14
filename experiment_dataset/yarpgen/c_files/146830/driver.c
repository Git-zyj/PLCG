#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -2030719187;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
int var_9 = -1061314598;
int zero = 0;
short var_10 = (short)21789;
long long int var_11 = -9150320851623795711LL;
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
