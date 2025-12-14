#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 2897627361821756137LL;
long long int var_8 = -1652381580879198494LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 1214842027842018873ULL;
unsigned long long int var_15 = 18275262617055050072ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
