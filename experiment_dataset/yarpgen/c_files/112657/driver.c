#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)102;
unsigned long long int var_5 = 9954163263724098935ULL;
int var_7 = -1575774827;
unsigned int var_9 = 1010128710U;
int zero = 0;
_Bool var_10 = (_Bool)1;
int var_11 = 1374603120;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
