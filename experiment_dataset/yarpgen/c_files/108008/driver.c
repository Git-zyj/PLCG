#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1675370064;
signed char var_5 = (signed char)-81;
unsigned short var_6 = (unsigned short)2785;
short var_9 = (short)32713;
unsigned long long int var_10 = 14326854168807602335ULL;
int zero = 0;
short var_12 = (short)28347;
int var_13 = 2041836373;
short var_14 = (short)-508;
unsigned int var_15 = 3874897671U;
void init() {
}

void checksum() {
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
