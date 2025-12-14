#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -415133334;
unsigned char var_9 = (unsigned char)201;
short var_11 = (short)-30306;
unsigned int var_15 = 2533525540U;
short var_16 = (short)-11508;
int zero = 0;
long long int var_19 = -729825772111230631LL;
int var_20 = 360199710;
void init() {
}

void checksum() {
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
