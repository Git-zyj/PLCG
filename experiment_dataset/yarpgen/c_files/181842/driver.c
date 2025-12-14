#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2918164611U;
unsigned int var_1 = 3557361205U;
unsigned char var_2 = (unsigned char)104;
int var_3 = -1034334041;
unsigned char var_4 = (unsigned char)105;
unsigned long long int var_5 = 8388977043688847154ULL;
signed char var_6 = (signed char)35;
_Bool var_7 = (_Bool)1;
int var_8 = 1014714015;
short var_9 = (short)-24914;
short var_10 = (short)30016;
unsigned char var_11 = (unsigned char)107;
int zero = 0;
long long int var_12 = -6242145228355280919LL;
unsigned int var_13 = 1428278446U;
short var_14 = (short)31543;
signed char var_15 = (signed char)14;
int var_16 = 192176316;
signed char var_17 = (signed char)96;
unsigned short var_18 = (unsigned short)64269;
int var_19 = 2012266180;
unsigned char var_20 = (unsigned char)132;
unsigned short var_21 = (unsigned short)20819;
unsigned short var_22 = (unsigned short)64890;
_Bool var_23 = (_Bool)1;
unsigned long long int var_24 = 984185954347189369ULL;
unsigned char var_25 = (unsigned char)182;
signed char var_26 = (signed char)57;
short var_27 = (short)-13952;
unsigned short var_28 = (unsigned short)41485;
short var_29 = (short)-31598;
short var_30 = (short)2795;
unsigned short var_31 = (unsigned short)33725;
signed char var_32 = (signed char)-116;
int var_33 = 2095863034;
unsigned short var_34 = (unsigned short)42891;
unsigned int var_35 = 1623399908U;
unsigned short var_36 = (unsigned short)8861;
_Bool var_37 = (_Bool)1;
long long int var_38 = 4365795630733475769LL;
unsigned char var_39 = (unsigned char)128;
short var_40 = (short)-22370;
int var_41 = 819763852;
int var_42 = -661054431;
unsigned int var_43 = 682697241U;
unsigned char var_44 = (unsigned char)42;
signed char var_45 = (signed char)14;
unsigned int var_46 = 2466344100U;
unsigned char var_47 = (unsigned char)253;
unsigned long long int var_48 = 472921034644259483ULL;
signed char var_49 = (signed char)-48;
signed char var_50 = (signed char)-117;
unsigned long long int var_51 = 13986812505072584493ULL;
short var_52 = (short)-12996;
short var_53 = (short)21359;
short var_54 = (short)-22173;
long long int var_55 = -6747458568956741069LL;
int var_56 = 958500019;
short var_57 = (short)7500;
unsigned short var_58 = (unsigned short)32181;
int var_59 = 838835047;
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
    hash(&seed, var_55);
    hash(&seed, var_56);
    hash(&seed, var_57);
    hash(&seed, var_58);
    hash(&seed, var_59);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
