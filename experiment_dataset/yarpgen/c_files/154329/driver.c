#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-16218;
signed char var_5 = (signed char)113;
short var_7 = (short)7728;
unsigned char var_10 = (unsigned char)9;
int var_11 = -1126239017;
unsigned long long int var_13 = 706189870556562519ULL;
unsigned long long int var_14 = 14024548135268804887ULL;
unsigned short var_15 = (unsigned short)28966;
signed char var_16 = (signed char)-33;
int zero = 0;
unsigned short var_18 = (unsigned short)52799;
int var_19 = 1589063858;
unsigned int var_20 = 2836603464U;
unsigned int var_21 = 3320620929U;
void init() {
}

void checksum() {
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
