#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
unsigned short var_10 = (unsigned short)64645;
long long int var_15 = -4638104778761290341LL;
int zero = 0;
unsigned char var_18 = (unsigned char)235;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 2453600573U;
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
