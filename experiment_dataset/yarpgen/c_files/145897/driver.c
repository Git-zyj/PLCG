#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1469331297;
long long int var_1 = -5023681416303628627LL;
_Bool var_2 = (_Bool)1;
short var_4 = (short)18146;
short var_6 = (short)-31256;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = 9210714871842203460LL;
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
