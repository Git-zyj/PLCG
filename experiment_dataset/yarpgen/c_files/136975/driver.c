#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9460388131700007823ULL;
_Bool var_1 = (_Bool)0;
signed char var_3 = (signed char)84;
unsigned char var_8 = (unsigned char)231;
unsigned short var_10 = (unsigned short)50718;
unsigned int var_12 = 1040543150U;
int zero = 0;
signed char var_13 = (signed char)102;
unsigned short var_14 = (unsigned short)13657;
unsigned long long int var_15 = 17225127069998448849ULL;
int var_16 = -688066443;
void init() {
}

void checksum() {
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
