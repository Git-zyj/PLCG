#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)52443;
unsigned char var_3 = (unsigned char)175;
short var_4 = (short)30611;
_Bool var_7 = (_Bool)1;
unsigned int var_10 = 234139011U;
signed char var_11 = (signed char)-95;
unsigned char var_14 = (unsigned char)182;
int zero = 0;
long long int var_16 = 7593792941172476454LL;
unsigned long long int var_17 = 8049672317073868442ULL;
long long int var_18 = 8549989980711434528LL;
unsigned long long int var_19 = 15729351931310010927ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
