#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)57704;
short var_10 = (short)-32091;
unsigned long long int var_14 = 16268639277087073842ULL;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 1495233585996180125ULL;
void init() {
}

void checksum() {
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
