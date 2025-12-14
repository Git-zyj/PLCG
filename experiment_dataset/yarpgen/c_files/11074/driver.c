#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 1966661264213932647ULL;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)44634;
unsigned short var_8 = (unsigned short)16732;
unsigned short var_9 = (unsigned short)29406;
int zero = 0;
int var_11 = 392268849;
unsigned short var_12 = (unsigned short)40157;
long long int var_13 = 3876236220348520299LL;
unsigned short var_14 = (unsigned short)28493;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
