#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3942127811U;
unsigned long long int var_5 = 6293264547040709522ULL;
unsigned long long int var_16 = 16147720595948894706ULL;
long long int var_17 = 684100477198470382LL;
unsigned long long int var_18 = 17281366454355718177ULL;
int zero = 0;
short var_20 = (short)10159;
_Bool var_21 = (_Bool)1;
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
