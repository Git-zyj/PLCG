#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16561056703287109346ULL;
short var_6 = (short)-22682;
short var_10 = (short)-12176;
unsigned long long int var_12 = 12573692293581937185ULL;
int var_15 = 2063828431;
long long int var_19 = 470348449840564536LL;
int zero = 0;
unsigned int var_20 = 1216712067U;
unsigned short var_21 = (unsigned short)64651;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
