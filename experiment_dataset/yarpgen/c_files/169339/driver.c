#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 6428169212235828291LL;
signed char var_7 = (signed char)-114;
long long int var_8 = -3751344944464785549LL;
int zero = 0;
int var_11 = 1167933718;
long long int var_12 = 621593714339491925LL;
unsigned long long int var_13 = 9526353563997401640ULL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
