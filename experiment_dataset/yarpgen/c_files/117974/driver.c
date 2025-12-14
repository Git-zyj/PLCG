#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8191354874919566636LL;
_Bool var_1 = (_Bool)0;
short var_2 = (short)-16842;
_Bool var_4 = (_Bool)0;
long long int var_7 = -5823402888447567776LL;
int zero = 0;
unsigned int var_10 = 807979519U;
short var_11 = (short)-19868;
_Bool var_12 = (_Bool)1;
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
