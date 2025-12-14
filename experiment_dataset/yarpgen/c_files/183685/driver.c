#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2108891535;
int var_3 = -1249496313;
unsigned long long int var_4 = 624116643338838784ULL;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)40478;
short var_10 = (short)8257;
int zero = 0;
long long int var_12 = -1757052367166616705LL;
unsigned int var_13 = 2928722237U;
unsigned char var_14 = (unsigned char)124;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
