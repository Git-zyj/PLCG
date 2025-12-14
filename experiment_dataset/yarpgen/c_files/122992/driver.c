#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)99;
unsigned char var_2 = (unsigned char)181;
unsigned long long int var_4 = 11544837195138174289ULL;
unsigned char var_8 = (unsigned char)48;
int var_9 = 337339077;
_Bool var_10 = (_Bool)0;
unsigned short var_14 = (unsigned short)62310;
int zero = 0;
unsigned long long int var_17 = 2346354314355737584ULL;
unsigned short var_18 = (unsigned short)64126;
unsigned int var_19 = 1163102558U;
unsigned int var_20 = 1895420036U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
