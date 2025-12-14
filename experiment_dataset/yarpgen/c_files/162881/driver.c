#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)126;
unsigned short var_1 = (unsigned short)31021;
unsigned char var_3 = (unsigned char)171;
unsigned short var_6 = (unsigned short)45926;
unsigned short var_8 = (unsigned short)48107;
signed char var_9 = (signed char)21;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
unsigned int var_13 = 4294402172U;
signed char var_15 = (signed char)-83;
short var_16 = (short)21082;
int zero = 0;
short var_17 = (short)-18028;
unsigned short var_18 = (unsigned short)30007;
unsigned int var_19 = 613370205U;
long long int var_20 = 8419740938402434669LL;
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
