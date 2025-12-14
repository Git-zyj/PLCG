#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4234036764U;
signed char var_4 = (signed char)10;
long long int var_5 = -3779622466668302399LL;
int var_6 = 1776185491;
int var_7 = 287371206;
int zero = 0;
unsigned int var_15 = 1988473791U;
int var_16 = 1638245020;
int var_17 = -1634283056;
long long int var_18 = 115238105524460733LL;
void init() {
}

void checksum() {
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
