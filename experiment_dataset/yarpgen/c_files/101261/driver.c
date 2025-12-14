#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1703093865;
unsigned int var_6 = 1210743765U;
unsigned short var_7 = (unsigned short)40310;
unsigned int var_9 = 1389006000U;
short var_13 = (short)-12690;
int zero = 0;
long long int var_17 = -7093150117814592830LL;
_Bool var_18 = (_Bool)1;
int var_19 = -2072085042;
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
