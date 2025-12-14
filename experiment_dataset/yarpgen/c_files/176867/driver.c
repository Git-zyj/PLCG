#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-15422;
long long int var_3 = -7543077454066188984LL;
unsigned int var_6 = 3354421845U;
long long int var_11 = -4711666238739153720LL;
unsigned int var_13 = 1780320738U;
int zero = 0;
signed char var_20 = (signed char)71;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
