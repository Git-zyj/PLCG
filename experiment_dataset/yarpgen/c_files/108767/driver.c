#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 687357404U;
int var_7 = 1438633458;
long long int var_11 = -2678241758456561024LL;
unsigned char var_12 = (unsigned char)249;
int zero = 0;
unsigned int var_14 = 2371508369U;
unsigned short var_15 = (unsigned short)61608;
_Bool var_16 = (_Bool)0;
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
