#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9160302813247555196LL;
signed char var_1 = (signed char)85;
int var_2 = 1245073130;
unsigned long long int var_9 = 11649724999479745020ULL;
unsigned short var_10 = (unsigned short)30072;
unsigned int var_11 = 73366771U;
unsigned long long int var_12 = 17426636825802403037ULL;
int zero = 0;
unsigned int var_14 = 3909801207U;
unsigned long long int var_15 = 11046332947446805203ULL;
unsigned int var_16 = 3735845106U;
void init() {
}

void checksum() {
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
