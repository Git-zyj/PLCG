#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1429629520U;
unsigned char var_3 = (unsigned char)123;
long long int var_4 = -8123307419516196251LL;
_Bool var_7 = (_Bool)0;
unsigned int var_9 = 3468800189U;
long long int var_10 = 3936325038929023249LL;
int zero = 0;
short var_12 = (short)-22238;
signed char var_13 = (signed char)64;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
