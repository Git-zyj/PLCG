#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 385529113U;
short var_5 = (short)-16167;
_Bool var_8 = (_Bool)1;
unsigned char var_10 = (unsigned char)81;
unsigned char var_11 = (unsigned char)146;
short var_13 = (short)-1832;
long long int var_15 = 4720211339864170435LL;
int zero = 0;
signed char var_16 = (signed char)40;
int var_17 = 257357311;
unsigned int var_18 = 804613178U;
unsigned short var_19 = (unsigned short)39267;
int var_20 = 1688042745;
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
