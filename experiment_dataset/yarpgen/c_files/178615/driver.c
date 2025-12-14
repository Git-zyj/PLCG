#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17915;
_Bool var_4 = (_Bool)0;
int var_7 = -881439051;
int var_15 = -1142754154;
unsigned char var_18 = (unsigned char)253;
int zero = 0;
long long int var_19 = -7290662831013327914LL;
int var_20 = 1076065156;
long long int var_21 = 5337640088689057218LL;
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
