#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15070848747112739901ULL;
short var_7 = (short)30743;
unsigned short var_8 = (unsigned short)28097;
int zero = 0;
unsigned long long int var_10 = 6333708686747133256ULL;
long long int var_11 = -5937574175824669482LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
