#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3816422149973983190ULL;
_Bool var_7 = (_Bool)1;
signed char var_16 = (signed char)-122;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 13026980366631930796ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
