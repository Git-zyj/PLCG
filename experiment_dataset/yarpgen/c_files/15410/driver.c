#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
_Bool var_6 = (_Bool)1;
long long int var_7 = -6800312949188152863LL;
unsigned long long int var_9 = 12935807068123017100ULL;
short var_11 = (short)-13273;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 13682728732920689936ULL;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
