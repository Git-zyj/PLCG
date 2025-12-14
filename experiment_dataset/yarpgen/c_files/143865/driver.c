#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -495293049;
_Bool var_2 = (_Bool)0;
long long int var_13 = -7824337579376559011LL;
int zero = 0;
short var_14 = (short)-20309;
unsigned short var_15 = (unsigned short)33840;
short var_16 = (short)23969;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
