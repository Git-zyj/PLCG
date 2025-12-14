#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -3731270253957050835LL;
_Bool var_14 = (_Bool)0;
signed char var_16 = (signed char)52;
int zero = 0;
unsigned short var_18 = (unsigned short)31290;
unsigned short var_19 = (unsigned short)48763;
unsigned short var_20 = (unsigned short)8651;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
