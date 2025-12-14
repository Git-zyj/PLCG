#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1328060907;
unsigned char var_4 = (unsigned char)26;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 12813163129853659099ULL;
unsigned long long int var_9 = 15129089469842288875ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)36685;
short var_17 = (short)18162;
unsigned short var_18 = (unsigned short)61413;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
