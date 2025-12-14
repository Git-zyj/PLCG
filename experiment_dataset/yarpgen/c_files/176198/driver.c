#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5732657298626676683ULL;
_Bool var_3 = (_Bool)1;
unsigned long long int var_8 = 2492396377400345458ULL;
int zero = 0;
unsigned long long int var_10 = 6861328757987160363ULL;
int var_11 = -291481553;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 13014714476382688338ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
