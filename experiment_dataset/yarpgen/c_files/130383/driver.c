#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7043649966318412550LL;
unsigned int var_6 = 432044759U;
long long int var_11 = -2920264937571897874LL;
long long int var_17 = -1317492099611449159LL;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)123;
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
