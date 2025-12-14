#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7820332709741994766LL;
unsigned short var_3 = (unsigned short)21718;
unsigned int var_6 = 1396612920U;
int var_8 = -1935871375;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 2611993101444011150ULL;
int zero = 0;
int var_17 = -635226209;
signed char var_18 = (signed char)-122;
unsigned short var_19 = (unsigned short)10186;
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
