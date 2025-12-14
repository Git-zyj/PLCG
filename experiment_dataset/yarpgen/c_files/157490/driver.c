#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26469;
unsigned int var_1 = 3048895557U;
unsigned int var_2 = 1296698080U;
unsigned int var_3 = 1901410871U;
signed char var_4 = (signed char)49;
unsigned char var_5 = (unsigned char)11;
unsigned short var_6 = (unsigned short)23826;
short var_7 = (short)24746;
unsigned char var_8 = (unsigned char)51;
short var_9 = (short)-26416;
short var_10 = (short)-15105;
unsigned char var_11 = (unsigned char)194;
int zero = 0;
signed char var_12 = (signed char)44;
short var_13 = (short)-10152;
signed char var_14 = (signed char)-102;
unsigned int var_15 = 3679144018U;
unsigned char var_16 = (unsigned char)125;
unsigned int var_17 = 1514349415U;
signed char var_18 = (signed char)55;
signed char var_19 = (signed char)-74;
unsigned int var_20 = 3918787162U;
signed char var_21 = (signed char)-78;
unsigned char var_22 = (unsigned char)105;
signed char var_23 = (signed char)89;
signed char var_24 = (signed char)-38;
unsigned int var_25 = 1806100873U;
signed char var_26 = (signed char)-114;
unsigned long long int var_27 = 8296360561795504567ULL;
unsigned long long int var_28 = 4436249353503269438ULL;
int var_29 = -682737969;
unsigned char var_30 = (unsigned char)53;
short var_31 = (short)23283;
_Bool var_32 = (_Bool)1;
short var_33 = (short)30486;
unsigned char var_34 = (unsigned char)143;
long long int var_35 = -7152179958413376638LL;
int var_36 = -1364019478;
int var_37 = -1962646477;
short var_38 = (short)5683;
signed char var_39 = (signed char)19;
signed char var_40 = (signed char)-18;
short var_41 = (short)23898;
unsigned char var_42 = (unsigned char)204;
signed char var_43 = (signed char)-121;
short var_44 = (short)-24861;
int var_45 = -2128512207;
unsigned short var_46 = (unsigned short)5384;
short var_47 = (short)-20571;
signed char var_48 = (signed char)-106;
short var_49 = (short)25702;
_Bool var_50 = (_Bool)1;
unsigned int var_51 = 334389620U;
unsigned int var_52 = 2005106906U;
unsigned int var_53 = 3827576656U;
unsigned int var_54 = 3632965281U;
signed char var_55 = (signed char)59;
unsigned int var_56 = 2770470923U;
unsigned char var_57 = (unsigned char)29;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
