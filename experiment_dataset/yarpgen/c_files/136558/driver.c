#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = -1540137367892976547LL;
signed char var_7 = (signed char)47;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)10;
unsigned short var_17 = (unsigned short)11031;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)43;
_Bool var_20 = (_Bool)0;
long long int var_21 = 1749114180173263593LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
