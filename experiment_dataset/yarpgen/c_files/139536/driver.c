#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)65;
long long int var_1 = 1216230315090954701LL;
long long int var_2 = -3856440849244466511LL;
short var_3 = (short)-25497;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 1970238953U;
unsigned int var_9 = 364983736U;
int zero = 0;
long long int var_11 = 1661703737256453325LL;
short var_12 = (short)-22860;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 402649615U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
