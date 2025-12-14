#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)56990;
int var_7 = -2114535067;
long long int var_8 = 6759838449109913371LL;
int zero = 0;
signed char var_12 = (signed char)-46;
long long int var_13 = -7106725014313706632LL;
unsigned long long int var_14 = 7848468780678484018ULL;
signed char var_15 = (signed char)-100;
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
