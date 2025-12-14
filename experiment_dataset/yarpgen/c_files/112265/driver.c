#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1820860900;
_Bool var_5 = (_Bool)1;
unsigned int var_9 = 2999327721U;
unsigned int var_10 = 3527085632U;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = -1170281548841936364LL;
short var_18 = (short)-8690;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
