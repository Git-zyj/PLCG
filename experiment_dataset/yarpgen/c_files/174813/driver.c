#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_8 = -1183761476201509695LL;
_Bool var_9 = (_Bool)1;
_Bool var_12 = (_Bool)1;
unsigned long long int var_17 = 5087277995869964800ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)45892;
unsigned short var_19 = (unsigned short)19756;
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
