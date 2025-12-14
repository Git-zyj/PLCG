#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1997530233;
unsigned long long int var_5 = 3744912029416391852ULL;
_Bool var_7 = (_Bool)0;
unsigned char var_14 = (unsigned char)31;
int zero = 0;
signed char var_15 = (signed char)-56;
signed char var_16 = (signed char)-88;
unsigned short var_17 = (unsigned short)16431;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
