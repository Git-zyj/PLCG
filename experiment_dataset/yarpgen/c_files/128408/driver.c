#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10307;
_Bool var_4 = (_Bool)0;
_Bool var_7 = (_Bool)0;
short var_11 = (short)-9238;
int zero = 0;
int var_12 = 393937520;
unsigned long long int var_13 = 10541229372471736734ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
