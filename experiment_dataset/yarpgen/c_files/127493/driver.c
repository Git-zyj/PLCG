#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
short var_14 = (short)32706;
unsigned long long int var_15 = 8917143816849358589ULL;
unsigned int var_16 = 3623374013U;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)42059;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 514665276U;
unsigned int var_21 = 2996371742U;
long long int var_22 = 6993357127686362877LL;
unsigned int var_23 = 95497812U;
_Bool var_24 = (_Bool)0;
int var_25 = -1460490151;
unsigned short var_26 = (unsigned short)48593;
int var_27 = -1704466876;
unsigned int var_28 = 3526024063U;
unsigned long long int var_29 = 4942750125087482189ULL;
unsigned char var_30 = (unsigned char)63;
signed char var_31 = (signed char)72;
unsigned short var_32 = (unsigned short)49298;
unsigned long long int var_33 = 453004188039943845ULL;
short var_34 = (short)6708;
_Bool var_35 = (_Bool)1;
unsigned short var_36 = (unsigned short)24799;
signed char var_37 = (signed char)70;
unsigned char var_38 = (unsigned char)141;
long long int var_39 = 3418171882526283196LL;
unsigned int var_40 = 458451962U;
int var_41 = -1477439546;
short var_42 = (short)18724;
unsigned int var_43 = 3827942759U;
unsigned long long int var_44 = 9688437873631120156ULL;
short var_45 = (short)705;
unsigned long long int var_46 = 3826602831875760225ULL;
unsigned long long int var_47 = 620791527954606370ULL;
unsigned long long int var_48 = 10171380153480819684ULL;
long long int var_49 = -5180316394845812802LL;
unsigned char var_50 = (unsigned char)125;
unsigned long long int var_51 = 1995379265519624937ULL;
unsigned long long int var_52 = 1202259357323007515ULL;
unsigned long long int var_53 = 12834341330284935004ULL;
int var_54 = -312032637;
void init() {
}

void checksum() {
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
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
