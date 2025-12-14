#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3601454691634463737LL;
_Bool var_9 = (_Bool)1;
unsigned short var_15 = (unsigned short)62014;
int zero = 0;
long long int var_16 = 233644291459299220LL;
long long int var_17 = 40654006762984459LL;
void init() {
}

void checksum() {
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
