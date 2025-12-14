#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)178;
long long int var_2 = -765679814447275814LL;
long long int var_3 = -8516328153089740483LL;
unsigned char var_9 = (unsigned char)221;
long long int var_12 = -1053092494296765061LL;
long long int var_17 = 7952030832907162943LL;
unsigned char var_19 = (unsigned char)172;
int zero = 0;
unsigned char var_20 = (unsigned char)248;
_Bool var_21 = (_Bool)1;
long long int var_22 = 9002496632168128054LL;
_Bool var_23 = (_Bool)1;
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
