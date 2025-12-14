#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6304;
int var_5 = 457409884;
short var_6 = (short)16410;
int var_7 = -380206451;
signed char var_9 = (signed char)(-127 - 1);
short var_11 = (short)12059;
int zero = 0;
unsigned int var_15 = 2436640214U;
short var_16 = (short)1545;
unsigned short var_17 = (unsigned short)188;
long long int var_18 = -3044132515176919441LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
