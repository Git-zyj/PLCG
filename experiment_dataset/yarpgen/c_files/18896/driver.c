#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3952881089U;
_Bool var_2 = (_Bool)0;
_Bool var_7 = (_Bool)0;
unsigned int var_10 = 638748487U;
signed char var_11 = (signed char)-36;
int zero = 0;
long long int var_15 = 792975494965628582LL;
unsigned short var_16 = (unsigned short)41801;
void init() {
}

void checksum() {
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
