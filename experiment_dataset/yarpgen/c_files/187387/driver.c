#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6105212497114788931LL;
long long int var_3 = 955098522088690529LL;
long long int var_7 = 7059588750919974230LL;
long long int var_8 = -7349897022386156038LL;
long long int var_11 = -1674478209245152170LL;
unsigned int var_14 = 1854710405U;
long long int var_16 = -173559726767989191LL;
unsigned int var_17 = 304352237U;
long long int var_18 = -2556340417390374532LL;
int zero = 0;
unsigned short var_19 = (unsigned short)14597;
unsigned int var_20 = 242336791U;
unsigned short var_21 = (unsigned short)51895;
void init() {
}

void checksum() {
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
