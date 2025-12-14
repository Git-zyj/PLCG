#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 677260004807981830ULL;
long long int var_8 = 448998627364378248LL;
int var_11 = 650448994;
int zero = 0;
unsigned long long int var_17 = 10208403014087479408ULL;
signed char var_18 = (signed char)-1;
void init() {
}

void checksum() {
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
