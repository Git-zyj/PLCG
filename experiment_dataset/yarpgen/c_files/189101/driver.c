#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)29;
int var_5 = 1667992169;
_Bool var_7 = (_Bool)1;
_Bool var_11 = (_Bool)0;
int var_12 = -1000118265;
int zero = 0;
signed char var_13 = (signed char)31;
long long int var_14 = 5303333477473018432LL;
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
