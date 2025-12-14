#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2839793560U;
signed char var_6 = (signed char)-1;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)172;
unsigned long long int var_12 = 10232493213857988108ULL;
int zero = 0;
unsigned long long int var_15 = 15171022205007969373ULL;
long long int var_16 = 7556214919650683839LL;
int var_17 = 1071493364;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
