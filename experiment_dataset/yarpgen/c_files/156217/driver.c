#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 4177439366600527201LL;
_Bool var_5 = (_Bool)0;
_Bool var_13 = (_Bool)1;
unsigned char var_15 = (unsigned char)137;
int zero = 0;
unsigned short var_16 = (unsigned short)17128;
long long int var_17 = -7008043553774010336LL;
unsigned char var_18 = (unsigned char)31;
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
