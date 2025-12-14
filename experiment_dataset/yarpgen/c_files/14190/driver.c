#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)47;
signed char var_7 = (signed char)63;
int zero = 0;
unsigned char var_12 = (unsigned char)191;
unsigned long long int var_13 = 13583921735949933065ULL;
_Bool var_14 = (_Bool)1;
long long int var_15 = -8814342191753343918LL;
signed char var_16 = (signed char)85;
unsigned short var_17 = (unsigned short)4843;
unsigned long long int var_18 = 3028076978659503016ULL;
_Bool var_19 = (_Bool)1;
short var_20 = (short)31019;
unsigned int var_21 = 617893671U;
unsigned short var_22 = (unsigned short)52560;
unsigned long long int var_23 = 11362064673750617247ULL;
unsigned char var_24 = (unsigned char)149;
unsigned short var_25 = (unsigned short)32848;
unsigned short var_26 = (unsigned short)11483;
int var_27 = -1346036836;
unsigned char var_28 = (unsigned char)130;
unsigned char var_29 = (unsigned char)241;
unsigned int var_30 = 2205525703U;
unsigned int var_31 = 3557752614U;
unsigned char var_32 = (unsigned char)255;
unsigned short var_33 = (unsigned short)52375;
short var_34 = (short)-25457;
_Bool var_35 = (_Bool)1;
unsigned short var_36 = (unsigned short)8513;
unsigned char var_37 = (unsigned char)253;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
