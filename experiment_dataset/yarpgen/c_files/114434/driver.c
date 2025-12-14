#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2344767483U;
_Bool var_4 = (_Bool)0;
int var_6 = -530898766;
unsigned long long int var_8 = 4396188328112027612ULL;
signed char var_10 = (signed char)30;
int zero = 0;
_Bool var_13 = (_Bool)0;
long long int var_14 = -8014620133414768005LL;
short var_15 = (short)-6511;
unsigned long long int var_16 = 9932122140718059407ULL;
signed char var_17 = (signed char)54;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
