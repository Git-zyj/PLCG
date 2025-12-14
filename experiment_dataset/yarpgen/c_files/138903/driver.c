#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -1349561218915114022LL;
unsigned int var_7 = 10403240U;
_Bool var_8 = (_Bool)0;
int var_10 = 815659572;
int var_11 = 1225484948;
long long int var_13 = 2451972394435173493LL;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)131;
int zero = 0;
_Bool var_17 = (_Bool)0;
short var_18 = (short)18786;
long long int var_19 = 6818663455561910044LL;
unsigned long long int var_20 = 10658604513584899132ULL;
unsigned int var_21 = 3700623703U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
