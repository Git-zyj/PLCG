#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4263678426788783028LL;
long long int var_2 = -2815307983486499262LL;
unsigned int var_7 = 760949931U;
unsigned int var_8 = 1324531662U;
int zero = 0;
unsigned short var_10 = (unsigned short)52454;
_Bool var_11 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
