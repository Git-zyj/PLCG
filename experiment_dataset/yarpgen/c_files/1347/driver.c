#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -516702798;
unsigned long long int var_6 = 5008366112984986894ULL;
unsigned long long int var_7 = 14903969260945842044ULL;
int var_9 = 1612017597;
int zero = 0;
signed char var_12 = (signed char)-28;
unsigned short var_13 = (unsigned short)2442;
unsigned short var_14 = (unsigned short)56407;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
