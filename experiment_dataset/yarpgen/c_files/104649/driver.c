#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)125;
_Bool var_6 = (_Bool)0;
long long int var_13 = -2332722366203016387LL;
int zero = 0;
long long int var_14 = 7489276333447441274LL;
signed char var_15 = (signed char)-91;
unsigned long long int var_16 = 5503924396928046903ULL;
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
