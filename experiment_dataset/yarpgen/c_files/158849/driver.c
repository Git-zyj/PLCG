#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5286691553474520567ULL;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)65522;
int zero = 0;
unsigned char var_14 = (unsigned char)31;
signed char var_15 = (signed char)-87;
long long int var_16 = 6608627623905007644LL;
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
