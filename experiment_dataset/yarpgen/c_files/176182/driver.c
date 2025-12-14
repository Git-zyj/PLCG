#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_4 = 1210492862;
_Bool var_5 = (_Bool)0;
unsigned long long int var_8 = 6064769163536452473ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)243;
unsigned short var_11 = (unsigned short)26281;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
