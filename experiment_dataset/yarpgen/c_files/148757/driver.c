#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
int var_7 = 1187985419;
signed char var_13 = (signed char)68;
_Bool var_14 = (_Bool)0;
long long int var_15 = -1192287990405285121LL;
signed char var_16 = (signed char)-14;
unsigned char var_17 = (unsigned char)78;
unsigned int var_18 = 1794009462U;
int zero = 0;
long long int var_20 = -4991598652562668662LL;
unsigned char var_21 = (unsigned char)20;
int var_22 = -1759934644;
long long int var_23 = 406925442024042667LL;
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
