#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_2 = 9035379110736417571ULL;
unsigned long long int var_4 = 8861284764986161906ULL;
int var_6 = -2043055866;
long long int var_7 = -8464054409160227705LL;
unsigned char var_17 = (unsigned char)101;
int zero = 0;
_Bool var_18 = (_Bool)1;
int var_19 = -1179461978;
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
