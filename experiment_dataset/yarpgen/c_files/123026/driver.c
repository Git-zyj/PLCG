#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8133399940934335755LL;
unsigned long long int var_5 = 17387603258010364942ULL;
signed char var_13 = (signed char)2;
short var_17 = (short)-11347;
int zero = 0;
long long int var_19 = -6781061171240199296LL;
long long int var_20 = 4871189454857483913LL;
_Bool var_21 = (_Bool)0;
long long int var_22 = 423664224727906684LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
