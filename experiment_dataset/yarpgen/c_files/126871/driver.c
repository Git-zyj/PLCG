#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)65;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)63934;
unsigned long long int var_5 = 8684422611736868506ULL;
int zero = 0;
int var_12 = -1154506361;
unsigned short var_13 = (unsigned short)37790;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
