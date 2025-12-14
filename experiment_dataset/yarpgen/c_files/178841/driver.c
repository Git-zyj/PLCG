#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)64482;
int var_8 = -865723144;
unsigned int var_13 = 3620620327U;
int zero = 0;
unsigned long long int var_14 = 10858401791353769363ULL;
unsigned long long int var_15 = 6733563527077896717ULL;
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
