#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)77;
_Bool var_9 = (_Bool)1;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned long long int var_15 = 827915944673543570ULL;
unsigned char var_16 = (unsigned char)70;
unsigned short var_17 = (unsigned short)58364;
unsigned long long int var_18 = 10587067785098961048ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
