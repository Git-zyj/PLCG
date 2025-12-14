#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1320539578;
unsigned long long int var_11 = 18317752068261252288ULL;
unsigned int var_13 = 3373273219U;
int zero = 0;
int var_16 = 1879321467;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)226;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
