#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5242585314786910912LL;
long long int var_3 = -2357705975785164934LL;
unsigned int var_8 = 2387083468U;
unsigned int var_9 = 2676480845U;
unsigned char var_11 = (unsigned char)64;
long long int var_12 = -4135392839641120264LL;
unsigned char var_15 = (unsigned char)21;
unsigned int var_17 = 1777610025U;
int zero = 0;
unsigned char var_19 = (unsigned char)72;
unsigned char var_20 = (unsigned char)146;
long long int var_21 = -2307258637774899518LL;
unsigned int var_22 = 666853260U;
long long int var_23 = -9095746266558074993LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
