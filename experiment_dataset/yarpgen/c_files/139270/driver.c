#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)88;
long long int var_9 = 6379374303586354131LL;
_Bool var_10 = (_Bool)0;
unsigned char var_12 = (unsigned char)123;
int zero = 0;
long long int var_13 = 5844852632246606338LL;
short var_14 = (short)-18998;
unsigned short var_15 = (unsigned short)55270;
unsigned short var_16 = (unsigned short)16744;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
