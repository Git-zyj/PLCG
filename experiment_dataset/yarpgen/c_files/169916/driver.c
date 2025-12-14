#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -1587933145841551687LL;
long long int var_11 = 1749498638379021100LL;
unsigned long long int var_13 = 15188352952926426659ULL;
unsigned short var_14 = (unsigned short)34378;
short var_15 = (short)4032;
int zero = 0;
signed char var_16 = (signed char)-63;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)136;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
