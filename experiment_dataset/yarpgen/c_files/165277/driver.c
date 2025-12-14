#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_7 = (_Bool)1;
unsigned char var_9 = (unsigned char)254;
_Bool var_10 = (_Bool)1;
unsigned short var_12 = (unsigned short)64807;
unsigned long long int var_15 = 5667310586701908290ULL;
int zero = 0;
long long int var_17 = 6495308668837784985LL;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
