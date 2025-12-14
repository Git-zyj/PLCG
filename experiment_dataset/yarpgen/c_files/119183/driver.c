#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4980973396760597786LL;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)251;
unsigned int var_9 = 2117413662U;
unsigned char var_12 = (unsigned char)80;
int zero = 0;
unsigned int var_18 = 1218629754U;
unsigned long long int var_19 = 12544590048309103436ULL;
unsigned char var_20 = (unsigned char)42;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
