#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4672187882679352790ULL;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 2731088558U;
long long int var_11 = 4873029479277526580LL;
unsigned int var_12 = 1182247133U;
long long int var_16 = 1129098976892378587LL;
int zero = 0;
unsigned char var_19 = (unsigned char)77;
unsigned char var_20 = (unsigned char)144;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
