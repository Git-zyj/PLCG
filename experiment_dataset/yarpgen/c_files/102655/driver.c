#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
unsigned char var_10 = (unsigned char)52;
unsigned long long int var_13 = 17435692225802263025ULL;
short var_14 = (short)-14861;
int zero = 0;
unsigned long long int var_19 = 5647816113847610293ULL;
unsigned long long int var_20 = 11938809291988378994ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
