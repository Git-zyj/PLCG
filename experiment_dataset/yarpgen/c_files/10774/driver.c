#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)26;
unsigned short var_2 = (unsigned short)20178;
long long int var_6 = 8316246782838306777LL;
unsigned short var_7 = (unsigned short)20352;
signed char var_8 = (signed char)17;
long long int var_9 = 7116804407370043814LL;
short var_11 = (short)-10498;
int zero = 0;
unsigned short var_13 = (unsigned short)30949;
unsigned char var_14 = (unsigned char)122;
unsigned int var_15 = 1028020771U;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
