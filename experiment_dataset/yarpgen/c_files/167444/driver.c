#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 479476210042462877LL;
short var_4 = (short)-11632;
unsigned long long int var_7 = 9765661213046231172ULL;
long long int var_11 = 7399229733815989450LL;
long long int var_15 = 718858275393018951LL;
unsigned long long int var_16 = 4010317976482805899ULL;
int zero = 0;
long long int var_19 = -4620403979053004907LL;
unsigned short var_20 = (unsigned short)38726;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
