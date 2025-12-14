#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_5 = -2482107512695668316LL;
short var_10 = (short)-28605;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = -2098881272;
unsigned long long int var_20 = 6796553636309338458ULL;
unsigned short var_21 = (unsigned short)1391;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
