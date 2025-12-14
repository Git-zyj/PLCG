#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_15 = (short)-26527;
unsigned char var_16 = (unsigned char)54;
short var_17 = (short)24021;
long long int var_19 = -6609543062527911292LL;
int zero = 0;
long long int var_20 = 5545787761249568073LL;
long long int var_21 = -1164397306372837433LL;
unsigned char var_22 = (unsigned char)81;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
