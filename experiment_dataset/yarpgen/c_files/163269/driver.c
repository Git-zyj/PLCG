#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-3;
int var_7 = 843731766;
unsigned char var_8 = (unsigned char)5;
unsigned int var_12 = 977155893U;
int zero = 0;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-17;
long long int var_16 = 8773262935101821717LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
