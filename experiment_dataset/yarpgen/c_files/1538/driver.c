#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8415901353444056256ULL;
long long int var_3 = -17548222909235835LL;
unsigned int var_4 = 240906153U;
unsigned short var_5 = (unsigned short)41962;
unsigned short var_6 = (unsigned short)3455;
long long int var_7 = 5452420310359033531LL;
unsigned short var_8 = (unsigned short)28079;
short var_10 = (short)-9622;
unsigned int var_11 = 3026599634U;
int var_12 = -442920571;
long long int var_13 = 8257314173212266598LL;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)235;
unsigned int var_16 = 3377492434U;
long long int var_17 = 2287952514340773332LL;
int zero = 0;
unsigned long long int var_19 = 6744854399144200579ULL;
signed char var_20 = (signed char)119;
unsigned long long int var_21 = 13610161545652534745ULL;
unsigned char var_22 = (unsigned char)80;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
