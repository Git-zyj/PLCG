#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7379765461944291591LL;
int var_2 = -1862306217;
unsigned char var_9 = (unsigned char)203;
unsigned int var_13 = 2524006838U;
int zero = 0;
int var_14 = 48120863;
long long int var_15 = 4942243695488017139LL;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
