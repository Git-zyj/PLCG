#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)28679;
unsigned short var_4 = (unsigned short)50298;
int var_7 = -1873745611;
int var_9 = 65452599;
int zero = 0;
long long int var_15 = -9048638108457816544LL;
signed char var_16 = (signed char)109;
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
