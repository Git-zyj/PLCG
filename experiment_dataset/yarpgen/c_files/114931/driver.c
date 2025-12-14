#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-18276;
long long int var_4 = 7703978776443804667LL;
short var_6 = (short)20000;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)21574;
long long int var_18 = -325544415172036834LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
