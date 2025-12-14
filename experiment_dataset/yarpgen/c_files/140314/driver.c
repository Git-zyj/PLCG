#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1765383525U;
_Bool var_8 = (_Bool)1;
long long int var_10 = 5500021286974765793LL;
int zero = 0;
signed char var_19 = (signed char)107;
unsigned char var_20 = (unsigned char)161;
long long int var_21 = 4740230487388960958LL;
short var_22 = (short)18727;
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
