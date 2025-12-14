#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)9497;
short var_7 = (short)1109;
int var_9 = 84815007;
unsigned short var_10 = (unsigned short)3334;
unsigned short var_11 = (unsigned short)5490;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_15 = -7083375179471886513LL;
unsigned int var_16 = 1095534960U;
long long int var_17 = 9077044081275210660LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
