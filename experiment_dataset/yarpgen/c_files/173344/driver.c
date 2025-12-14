#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_4 = 16405038755470113907ULL;
long long int var_5 = 6040599266365557425LL;
unsigned short var_6 = (unsigned short)52321;
int var_7 = 1971569212;
unsigned int var_8 = 2666178213U;
int var_9 = 90921737;
int var_10 = -738637227;
unsigned long long int var_13 = 13965154200892588278ULL;
int zero = 0;
unsigned int var_14 = 2654161981U;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)47;
unsigned long long int var_17 = 8742705615785580262ULL;
void init() {
}

void checksum() {
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
