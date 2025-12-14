#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2582667269409404043LL;
int var_3 = 133990788;
_Bool var_6 = (_Bool)1;
int var_10 = -1278239027;
int zero = 0;
int var_15 = 362929024;
signed char var_16 = (signed char)-34;
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
