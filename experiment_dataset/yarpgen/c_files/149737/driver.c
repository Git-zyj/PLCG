#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)26071;
int var_5 = 161451669;
int var_6 = 259530728;
unsigned short var_10 = (unsigned short)38645;
_Bool var_11 = (_Bool)0;
unsigned int var_13 = 809242130U;
int zero = 0;
unsigned short var_16 = (unsigned short)45184;
int var_17 = -421554640;
unsigned int var_18 = 579932118U;
short var_19 = (short)-5459;
int var_20 = -1370407683;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
