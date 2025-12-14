#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = 7243114102241668621LL;
unsigned char var_3 = (unsigned char)124;
signed char var_8 = (signed char)40;
int zero = 0;
unsigned long long int var_18 = 3135089417028184782ULL;
long long int var_19 = -480989636437055146LL;
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
