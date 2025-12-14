#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = -1649847158;
unsigned short var_6 = (unsigned short)26380;
unsigned short var_14 = (unsigned short)1809;
int zero = 0;
short var_18 = (short)-30863;
long long int var_19 = 6986010608764149096LL;
long long int var_20 = -6211887785611802224LL;
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
