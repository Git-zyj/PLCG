#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 123501533U;
unsigned int var_9 = 4191165614U;
unsigned char var_12 = (unsigned char)75;
_Bool var_16 = (_Bool)0;
unsigned char var_18 = (unsigned char)194;
int zero = 0;
long long int var_19 = 3909858630429617393LL;
unsigned char var_20 = (unsigned char)192;
long long int var_21 = 7074507870997584904LL;
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
