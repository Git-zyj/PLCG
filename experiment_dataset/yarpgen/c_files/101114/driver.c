#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)23873;
int var_4 = -1256472075;
unsigned short var_7 = (unsigned short)22113;
long long int var_9 = -4143245851669264501LL;
long long int var_10 = -7173780105707876652LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_16 = (short)27072;
unsigned short var_17 = (unsigned short)27771;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
