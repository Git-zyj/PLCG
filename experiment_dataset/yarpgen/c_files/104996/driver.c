#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)24905;
_Bool var_11 = (_Bool)0;
long long int var_15 = -7600155547107345442LL;
int zero = 0;
unsigned short var_17 = (unsigned short)46403;
int var_18 = -2085719370;
void init() {
}

void checksum() {
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
