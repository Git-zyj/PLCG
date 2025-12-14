#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 2116533357;
signed char var_7 = (signed char)110;
long long int var_10 = 5185185609508752362LL;
_Bool var_11 = (_Bool)0;
int var_14 = 1555897131;
int zero = 0;
long long int var_15 = -3575585989271996025LL;
unsigned int var_16 = 1599051955U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
