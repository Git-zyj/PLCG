#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 5825954616791466402ULL;
unsigned short var_9 = (unsigned short)57000;
int var_13 = -919270901;
int zero = 0;
unsigned short var_18 = (unsigned short)51247;
unsigned short var_19 = (unsigned short)59010;
signed char var_20 = (signed char)-88;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
