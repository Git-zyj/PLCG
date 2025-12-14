#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20936;
unsigned char var_5 = (unsigned char)146;
int var_9 = -353045892;
long long int var_11 = -8096425978458957478LL;
int var_12 = 1188888625;
int zero = 0;
int var_13 = 315999922;
long long int var_14 = -764003489756303758LL;
unsigned short var_15 = (unsigned short)3925;
unsigned short var_16 = (unsigned short)1955;
long long int var_17 = -7724695310065967791LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
