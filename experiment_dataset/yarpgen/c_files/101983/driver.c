#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)150;
long long int var_4 = -4925105348642503832LL;
_Bool var_9 = (_Bool)1;
long long int var_11 = -4299133763287420737LL;
int zero = 0;
unsigned char var_18 = (unsigned char)17;
long long int var_19 = -7327333806080151916LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
