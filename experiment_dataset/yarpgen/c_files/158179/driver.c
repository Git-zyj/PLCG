#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)11916;
unsigned char var_3 = (unsigned char)208;
short var_4 = (short)-27499;
unsigned short var_5 = (unsigned short)10122;
unsigned char var_6 = (unsigned char)237;
short var_7 = (short)-23603;
short var_10 = (short)13458;
unsigned int var_14 = 3088353889U;
unsigned long long int var_15 = 69236322872731159ULL;
unsigned short var_16 = (unsigned short)39240;
int zero = 0;
unsigned char var_17 = (unsigned char)203;
int var_18 = -1132740405;
unsigned short var_19 = (unsigned short)25113;
unsigned char var_20 = (unsigned char)100;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
