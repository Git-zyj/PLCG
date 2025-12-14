#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-30672;
unsigned int var_7 = 590024787U;
long long int var_8 = 3455444407794291519LL;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_13 = 9588007068134866929ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)105;
long long int var_18 = 2497872726537465258LL;
unsigned long long int var_19 = 13622354933296600008ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
