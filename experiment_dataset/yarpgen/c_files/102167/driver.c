#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-24;
long long int var_3 = 2158630284400171818LL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_11 = 1789408009714294085ULL;
long long int var_12 = -1308642501611846136LL;
int zero = 0;
unsigned long long int var_14 = 4705337576638492994ULL;
int var_15 = -412075780;
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
