#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)-9;
unsigned int var_12 = 1354122459U;
int var_17 = -750442378;
int zero = 0;
unsigned long long int var_19 = 15894540748614300676ULL;
unsigned short var_20 = (unsigned short)63673;
unsigned short var_21 = (unsigned short)32228;
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
