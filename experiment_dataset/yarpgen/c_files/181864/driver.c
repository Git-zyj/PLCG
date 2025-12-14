#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_4 = 6336959297170705396LL;
_Bool var_7 = (_Bool)1;
int var_17 = 1963045780;
int zero = 0;
unsigned long long int var_18 = 5097169816196714481ULL;
unsigned char var_19 = (unsigned char)60;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
