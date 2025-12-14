#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)26321;
unsigned int var_10 = 3519609104U;
_Bool var_11 = (_Bool)0;
long long int var_12 = 668491420073411413LL;
int zero = 0;
unsigned long long int var_13 = 14039709205340602868ULL;
long long int var_14 = 6427493608248128050LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
