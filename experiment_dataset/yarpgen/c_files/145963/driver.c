#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 158898226916857123LL;
unsigned int var_4 = 2660154800U;
signed char var_5 = (signed char)-27;
unsigned int var_6 = 1876675540U;
int zero = 0;
unsigned int var_10 = 1222030651U;
signed char var_11 = (signed char)18;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
