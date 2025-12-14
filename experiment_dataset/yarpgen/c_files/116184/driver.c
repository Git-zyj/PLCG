#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1798459170U;
unsigned char var_6 = (unsigned char)78;
short var_9 = (short)3082;
unsigned char var_12 = (unsigned char)169;
_Bool var_13 = (_Bool)1;
long long int var_17 = 8355915937778128416LL;
int zero = 0;
int var_19 = -1169013446;
long long int var_20 = 1552023313131993862LL;
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
