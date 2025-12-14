#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 226654459;
unsigned short var_9 = (unsigned short)22938;
int var_10 = -1579882837;
int var_11 = 255286489;
short var_18 = (short)1913;
int zero = 0;
long long int var_20 = 7683318729259042409LL;
short var_21 = (short)-4783;
_Bool var_22 = (_Bool)0;
short var_23 = (short)-16454;
int var_24 = 734362801;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
