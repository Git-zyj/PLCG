#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6360868824162492088ULL;
unsigned long long int var_5 = 17045561377152482735ULL;
long long int var_6 = 5186897257877335578LL;
unsigned int var_8 = 2996517805U;
long long int var_10 = -2360083441728954787LL;
long long int var_11 = -5071944919264249321LL;
short var_12 = (short)-12536;
int zero = 0;
_Bool var_13 = (_Bool)0;
short var_14 = (short)28731;
unsigned char var_15 = (unsigned char)82;
unsigned char var_16 = (unsigned char)66;
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
