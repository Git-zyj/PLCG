#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)45757;
signed char var_3 = (signed char)24;
_Bool var_11 = (_Bool)0;
unsigned long long int var_14 = 9814985564425376634ULL;
int zero = 0;
unsigned long long int var_16 = 10432768950205751539ULL;
unsigned long long int var_17 = 17376405267091418349ULL;
void init() {
}

void checksum() {
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
