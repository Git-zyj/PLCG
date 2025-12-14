#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15610;
unsigned long long int var_2 = 6320057601367579130ULL;
short var_4 = (short)-7204;
unsigned int var_5 = 2753435381U;
unsigned char var_6 = (unsigned char)82;
short var_7 = (short)-20323;
long long int var_10 = 1271986588101882484LL;
unsigned char var_11 = (unsigned char)168;
unsigned int var_12 = 1520702977U;
long long int var_13 = -8183357904838462067LL;
_Bool var_14 = (_Bool)1;
unsigned short var_16 = (unsigned short)54808;
int zero = 0;
unsigned char var_17 = (unsigned char)45;
unsigned char var_18 = (unsigned char)150;
short var_19 = (short)-24549;
unsigned long long int var_20 = 8990540275096479648ULL;
void init() {
}

void checksum() {
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
