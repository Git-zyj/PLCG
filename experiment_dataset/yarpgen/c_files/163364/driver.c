#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 657211410;
unsigned char var_2 = (unsigned char)10;
unsigned long long int var_3 = 1426056125585541900ULL;
unsigned long long int var_4 = 9390023610135564024ULL;
signed char var_5 = (signed char)-98;
unsigned short var_10 = (unsigned short)64638;
short var_11 = (short)-3750;
unsigned short var_12 = (unsigned short)53116;
signed char var_14 = (signed char)86;
unsigned char var_15 = (unsigned char)66;
long long int var_16 = -3884226329052869818LL;
unsigned long long int var_18 = 17509155968973838087ULL;
signed char var_19 = (signed char)-68;
int zero = 0;
unsigned short var_20 = (unsigned short)50523;
short var_21 = (short)-8175;
long long int var_22 = -5786253652313684461LL;
unsigned short var_23 = (unsigned short)20366;
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
