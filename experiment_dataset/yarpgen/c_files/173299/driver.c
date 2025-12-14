#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2141387402566217330LL;
unsigned long long int var_1 = 15421589171133599949ULL;
unsigned long long int var_2 = 12069605197894577852ULL;
long long int var_7 = 9157548486122699982LL;
unsigned char var_8 = (unsigned char)191;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)18;
int zero = 0;
unsigned char var_16 = (unsigned char)39;
short var_17 = (short)2660;
short var_18 = (short)13594;
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
