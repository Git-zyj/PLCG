#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)203;
_Bool var_9 = (_Bool)1;
long long int var_12 = -5254225901993454349LL;
int var_13 = -597445181;
long long int var_14 = 8600354462941162082LL;
unsigned long long int var_15 = 4843056775423482125ULL;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned short var_19 = (unsigned short)1599;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 717069595U;
_Bool var_22 = (_Bool)1;
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
