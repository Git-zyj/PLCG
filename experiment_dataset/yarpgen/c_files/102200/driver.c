#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 198888946U;
unsigned int var_5 = 3449727271U;
unsigned long long int var_9 = 4925631265335532375ULL;
short var_10 = (short)25378;
long long int var_11 = -4639544715798671980LL;
int zero = 0;
int var_17 = 1723437382;
_Bool var_18 = (_Bool)1;
short var_19 = (short)3015;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
