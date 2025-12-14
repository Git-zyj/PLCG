#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1355797145;
int var_6 = 984892287;
unsigned long long int var_8 = 13615235051342092091ULL;
long long int var_16 = 5161235183511598888LL;
int zero = 0;
long long int var_20 = 8388365580925946831LL;
_Bool var_21 = (_Bool)1;
short var_22 = (short)-8826;
int var_23 = -794442115;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
