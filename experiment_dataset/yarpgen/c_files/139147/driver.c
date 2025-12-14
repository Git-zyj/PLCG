#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -62300325161737379LL;
unsigned char var_4 = (unsigned char)90;
unsigned int var_8 = 3775810034U;
_Bool var_9 = (_Bool)1;
unsigned int var_16 = 3235462478U;
int zero = 0;
int var_18 = 346700784;
long long int var_19 = 6930871939407330754LL;
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
