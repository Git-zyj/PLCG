#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11912;
unsigned char var_2 = (unsigned char)221;
int var_3 = -674283865;
unsigned long long int var_8 = 7369778799502560347ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)38114;
unsigned long long int var_15 = 2419787546199017161ULL;
_Bool var_16 = (_Bool)0;
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
