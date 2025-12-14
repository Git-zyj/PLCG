#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned long long int var_7 = 14912301265558122005ULL;
unsigned short var_12 = (unsigned short)25746;
long long int var_13 = 124142389995939526LL;
int var_15 = -251175503;
unsigned long long int var_17 = 6735401879922757856ULL;
int zero = 0;
long long int var_18 = 3862844734940530140LL;
_Bool var_19 = (_Bool)1;
int var_20 = -1238043885;
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
