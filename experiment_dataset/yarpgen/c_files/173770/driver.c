#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -518746616;
long long int var_3 = 2262177337907251162LL;
short var_6 = (short)-30844;
int var_10 = 1786253639;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned int var_12 = 3757540471U;
long long int var_13 = 5800806276497904227LL;
long long int var_14 = 2305760243590025845LL;
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
