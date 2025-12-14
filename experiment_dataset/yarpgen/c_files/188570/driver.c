#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3044131693U;
unsigned char var_2 = (unsigned char)112;
short var_3 = (short)-872;
unsigned char var_4 = (unsigned char)116;
unsigned int var_5 = 2371099427U;
unsigned long long int var_7 = 12988595758254742676ULL;
unsigned int var_8 = 2589610282U;
unsigned long long int var_10 = 13309827886428368366ULL;
_Bool var_12 = (_Bool)0;
short var_14 = (short)-25793;
long long int var_15 = 6493579809526665608LL;
unsigned long long int var_18 = 7777047049543272153ULL;
unsigned short var_19 = (unsigned short)28116;
int zero = 0;
unsigned short var_20 = (unsigned short)58816;
int var_21 = 1064514903;
unsigned int var_22 = 2369638029U;
short var_23 = (short)27760;
long long int var_24 = 873749198141866871LL;
short var_25 = (short)-16583;
unsigned char var_26 = (unsigned char)217;
unsigned char var_27 = (unsigned char)12;
unsigned int var_28 = 2875171554U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
