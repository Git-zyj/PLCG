#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2235627717444221564LL;
long long int var_1 = 4791476485118980634LL;
short var_2 = (short)20342;
short var_4 = (short)-19155;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)0;
long long int var_11 = -8228518743441275969LL;
_Bool var_16 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)1951;
long long int var_19 = -6598430247771006755LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
