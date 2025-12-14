#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
short var_10 = (short)-2903;
long long int var_11 = 5711122487461515175LL;
int var_12 = 1410734943;
unsigned long long int var_13 = 13464220340187071423ULL;
signed char var_14 = (signed char)-65;
int zero = 0;
long long int var_16 = -2776876018218661501LL;
int var_17 = 1258874281;
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
