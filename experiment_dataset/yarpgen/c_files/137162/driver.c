#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)28896;
long long int var_8 = -4027952349377836066LL;
int zero = 0;
unsigned int var_10 = 328316010U;
long long int var_11 = 4835265777875867370LL;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-22436;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
