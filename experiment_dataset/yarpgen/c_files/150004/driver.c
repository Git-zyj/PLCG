#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16945;
unsigned long long int var_2 = 7151141569605577987ULL;
long long int var_3 = -8225525597776643777LL;
unsigned char var_4 = (unsigned char)51;
unsigned char var_6 = (unsigned char)0;
unsigned short var_7 = (unsigned short)35625;
short var_8 = (short)-8982;
signed char var_10 = (signed char)-105;
unsigned short var_13 = (unsigned short)26622;
int zero = 0;
unsigned char var_14 = (unsigned char)252;
unsigned int var_15 = 2128211334U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
