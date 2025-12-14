#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)18398;
unsigned long long int var_5 = 16084133989853199172ULL;
unsigned long long int var_6 = 15702335730466308473ULL;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)1;
short var_12 = (short)-863;
long long int var_15 = -5915292563194805852LL;
unsigned char var_18 = (unsigned char)205;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)241;
unsigned int var_21 = 1478002468U;
unsigned short var_22 = (unsigned short)58126;
int var_23 = -401033064;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
