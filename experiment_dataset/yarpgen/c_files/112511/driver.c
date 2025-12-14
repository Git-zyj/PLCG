#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_2 = 1496974933U;
unsigned int var_4 = 3507449730U;
unsigned long long int var_5 = 12789733593144503063ULL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 1522587682976265342ULL;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)92;
int var_10 = 1561186654;
int zero = 0;
int var_11 = -1560714060;
signed char var_12 = (signed char)31;
unsigned char var_13 = (unsigned char)71;
void init() {
}

void checksum() {
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
