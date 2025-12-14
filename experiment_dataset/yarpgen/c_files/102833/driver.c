#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15092476755479249459ULL;
signed char var_4 = (signed char)-92;
int var_5 = 2056414217;
long long int var_7 = -7015924912528518822LL;
long long int var_8 = 1405662244581846733LL;
int var_9 = -1841657357;
_Bool var_11 = (_Bool)1;
int zero = 0;
long long int var_12 = 969380272104660374LL;
unsigned long long int var_13 = 16155027556773835391ULL;
_Bool var_14 = (_Bool)1;
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
