#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
signed char var_5 = (signed char)-85;
unsigned char var_7 = (unsigned char)243;
unsigned int var_8 = 1589542807U;
signed char var_10 = (signed char)-117;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned int var_12 = 3054119360U;
long long int var_13 = -4197169932872499995LL;
void init() {
}

void checksum() {
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
