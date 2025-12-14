#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)14;
unsigned short var_2 = (unsigned short)20410;
unsigned char var_3 = (unsigned char)129;
unsigned int var_4 = 903089198U;
signed char var_5 = (signed char)28;
int zero = 0;
unsigned int var_11 = 289208543U;
unsigned long long int var_12 = 15388112187037367439ULL;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
