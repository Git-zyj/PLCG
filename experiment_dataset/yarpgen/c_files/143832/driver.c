#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 941427551U;
unsigned int var_3 = 1031752700U;
unsigned short var_4 = (unsigned short)28293;
short var_5 = (short)1328;
signed char var_8 = (signed char)24;
int zero = 0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-101;
unsigned long long int var_12 = 4917601805913479854ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
