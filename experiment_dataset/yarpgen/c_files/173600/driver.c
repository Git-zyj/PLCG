#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40175;
unsigned short var_1 = (unsigned short)63924;
unsigned char var_8 = (unsigned char)102;
_Bool var_10 = (_Bool)1;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned char var_18 = (unsigned char)205;
short var_19 = (short)27987;
unsigned long long int var_20 = 16819971305116343229ULL;
unsigned long long int var_21 = 12048991726371058191ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
