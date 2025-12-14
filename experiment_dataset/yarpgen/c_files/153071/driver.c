#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 14665624782679209199ULL;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)12558;
long long int var_10 = 1447537974093330323LL;
unsigned long long int var_12 = 9402670281223267128ULL;
unsigned short var_13 = (unsigned short)51531;
int zero = 0;
unsigned short var_16 = (unsigned short)41537;
unsigned char var_17 = (unsigned char)24;
_Bool var_18 = (_Bool)1;
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
