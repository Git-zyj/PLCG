#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8247057109143420741LL;
unsigned int var_6 = 242381300U;
unsigned long long int var_7 = 12954133336942699376ULL;
unsigned int var_8 = 1613905578U;
unsigned char var_10 = (unsigned char)251;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = -462639888;
long long int var_14 = -2311684899442346399LL;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
