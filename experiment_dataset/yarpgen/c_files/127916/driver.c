#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)12243;
short var_4 = (short)287;
unsigned char var_8 = (unsigned char)36;
unsigned long long int var_9 = 7375156288497718075ULL;
unsigned int var_11 = 88634191U;
int var_18 = 1494348116;
int zero = 0;
int var_20 = 1394511537;
_Bool var_21 = (_Bool)0;
long long int var_22 = -6240781447984092950LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
