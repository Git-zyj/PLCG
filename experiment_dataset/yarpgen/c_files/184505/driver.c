#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1445921342U;
unsigned int var_4 = 79518050U;
unsigned char var_5 = (unsigned char)243;
int var_6 = 1797969857;
unsigned long long int var_8 = 1534888716524754264ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)-125;
unsigned int var_12 = 277085716U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
