#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1756602855U;
unsigned int var_4 = 1997796611U;
unsigned long long int var_5 = 8334594014292750767ULL;
int var_6 = -1173072416;
short var_8 = (short)15423;
int zero = 0;
int var_19 = -1428566344;
long long int var_20 = -3696584974875290674LL;
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
