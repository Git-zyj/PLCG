#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2008902941;
unsigned char var_3 = (unsigned char)201;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
short var_7 = (short)377;
unsigned long long int var_8 = 11181933907740350001ULL;
unsigned char var_9 = (unsigned char)39;
long long int var_10 = -2648870337635734272LL;
short var_11 = (short)-31200;
int zero = 0;
unsigned long long int var_12 = 17410830942846757886ULL;
int var_13 = 1120909820;
_Bool var_14 = (_Bool)0;
long long int var_15 = -7962904164111438676LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
