#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)64199;
unsigned long long int var_14 = 1298726935389054823ULL;
int zero = 0;
signed char var_19 = (signed char)36;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 16612908639729660703ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
