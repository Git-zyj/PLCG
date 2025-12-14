#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9116743084817851520LL;
long long int var_2 = 8824129489377477094LL;
_Bool var_4 = (_Bool)1;
long long int var_6 = 8345692638343881310LL;
long long int var_7 = -3616987574077094706LL;
unsigned short var_10 = (unsigned short)42469;
int zero = 0;
long long int var_11 = 7402799349260998145LL;
unsigned long long int var_12 = 14357100309113767875ULL;
unsigned int var_13 = 3005468834U;
int var_14 = -1657552276;
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
