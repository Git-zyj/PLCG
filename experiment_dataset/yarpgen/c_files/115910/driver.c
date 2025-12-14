#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17602022969208619007ULL;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 653694226U;
signed char var_4 = (signed char)-21;
unsigned int var_5 = 483114962U;
unsigned short var_6 = (unsigned short)21521;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned long long int var_10 = 549200543713042524ULL;
unsigned long long int var_11 = 8658925553239913095ULL;
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
