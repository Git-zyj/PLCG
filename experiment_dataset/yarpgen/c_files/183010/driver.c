#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-16796;
unsigned short var_4 = (unsigned short)7419;
short var_6 = (short)-29246;
unsigned short var_8 = (unsigned short)43481;
_Bool var_12 = (_Bool)1;
int zero = 0;
long long int var_13 = -4929013036572586090LL;
short var_14 = (short)18865;
unsigned short var_15 = (unsigned short)13490;
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
