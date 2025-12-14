#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)75;
signed char var_3 = (signed char)28;
int var_6 = 1802777029;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 3329220675455073262ULL;
long long int var_11 = 923184245107769897LL;
int zero = 0;
short var_14 = (short)-1882;
short var_15 = (short)-6725;
unsigned char var_16 = (unsigned char)31;
int var_17 = 142013526;
int var_18 = -1609295710;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
