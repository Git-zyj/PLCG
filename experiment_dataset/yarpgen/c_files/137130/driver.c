#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_4 = (short)13343;
unsigned char var_5 = (unsigned char)3;
long long int var_7 = 3593061795847571242LL;
signed char var_8 = (signed char)-79;
unsigned char var_10 = (unsigned char)63;
int zero = 0;
signed char var_14 = (signed char)103;
long long int var_15 = -286324186646494795LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
