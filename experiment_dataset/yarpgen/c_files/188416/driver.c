#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1621231037;
signed char var_1 = (signed char)-42;
int var_2 = 1847106497;
unsigned short var_3 = (unsigned short)21622;
signed char var_4 = (signed char)24;
long long int var_7 = 1802213423401116954LL;
unsigned char var_8 = (unsigned char)9;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 6690492427620376817ULL;
unsigned short var_11 = (unsigned short)325;
int zero = 0;
unsigned short var_13 = (unsigned short)31677;
long long int var_14 = 5130203906051983533LL;
short var_15 = (short)12349;
long long int var_16 = -4407551594616377420LL;
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
