#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_3 = 744103845U;
_Bool var_4 = (_Bool)0;
unsigned char var_6 = (unsigned char)172;
int var_8 = -283658766;
unsigned int var_9 = 3371404000U;
unsigned short var_13 = (unsigned short)7347;
int zero = 0;
unsigned short var_16 = (unsigned short)53332;
unsigned int var_17 = 4232492282U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
