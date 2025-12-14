#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -450334154848302286LL;
long long int var_7 = 3524382839331722695LL;
long long int var_15 = -2898424931736637552LL;
long long int var_17 = -6877165793767106517LL;
int zero = 0;
long long int var_18 = -4064263966348016852LL;
long long int var_19 = 8791533104630137234LL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
