#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_2 = 1627158901U;
_Bool var_4 = (_Bool)1;
unsigned short var_10 = (unsigned short)25609;
unsigned int var_11 = 1004093950U;
int var_14 = 652971504;
int zero = 0;
long long int var_16 = 1913418594699271013LL;
unsigned int var_17 = 3596966226U;
unsigned short var_18 = (unsigned short)61312;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
