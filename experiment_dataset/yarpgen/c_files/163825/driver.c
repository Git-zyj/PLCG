#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 61432294;
short var_2 = (short)755;
signed char var_3 = (signed char)31;
short var_4 = (short)-30023;
int var_7 = -2958074;
unsigned char var_9 = (unsigned char)252;
unsigned long long int var_10 = 3396536647340098538ULL;
int zero = 0;
long long int var_12 = 6756124589886674716LL;
short var_13 = (short)31138;
int var_14 = 1135944962;
signed char var_15 = (signed char)23;
signed char var_16 = (signed char)-35;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
