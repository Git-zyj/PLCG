#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3483;
unsigned long long int var_5 = 4573518786583797601ULL;
_Bool var_9 = (_Bool)1;
signed char var_15 = (signed char)73;
unsigned long long int var_19 = 1032651894098755729ULL;
int zero = 0;
int var_20 = 1764141998;
int var_21 = 1353393641;
unsigned short var_22 = (unsigned short)52304;
unsigned long long int var_23 = 17552920523431213523ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
