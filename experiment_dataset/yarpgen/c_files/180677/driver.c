#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)50;
unsigned int var_1 = 134417061U;
_Bool var_2 = (_Bool)1;
short var_3 = (short)18229;
short var_5 = (short)-30503;
_Bool var_9 = (_Bool)1;
int var_12 = 2133891148;
short var_14 = (short)15510;
int zero = 0;
long long int var_16 = 77663607771418849LL;
int var_17 = 1761883718;
_Bool var_18 = (_Bool)1;
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
