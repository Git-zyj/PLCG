#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1700523561006784644LL;
_Bool var_4 = (_Bool)1;
long long int var_6 = -7540546718005117729LL;
int zero = 0;
unsigned int var_10 = 106760522U;
long long int var_11 = -4322668401272276285LL;
unsigned long long int var_12 = 13939041149609143889ULL;
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
