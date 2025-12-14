#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29930;
signed char var_1 = (signed char)118;
int var_2 = -1139828875;
unsigned int var_3 = 707955426U;
unsigned short var_4 = (unsigned short)54312;
unsigned char var_5 = (unsigned char)103;
long long int var_7 = 5001789001318407490LL;
unsigned int var_8 = 3134732621U;
signed char var_9 = (signed char)76;
int var_10 = 16077863;
unsigned char var_11 = (unsigned char)152;
unsigned long long int var_12 = 14885193412854179078ULL;
short var_13 = (short)6408;
unsigned long long int var_14 = 3303263054423743115ULL;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 2427810195862214926ULL;
unsigned char var_19 = (unsigned char)198;
_Bool var_20 = (_Bool)1;
long long int var_21 = -2425105613429279342LL;
unsigned short var_22 = (unsigned short)30529;
unsigned char var_23 = (unsigned char)39;
_Bool var_24 = (_Bool)1;
unsigned short var_25 = (unsigned short)52401;
unsigned char var_26 = (unsigned char)140;
unsigned short var_27 = (unsigned short)14504;
unsigned long long int var_28 = 4973222338280077507ULL;
unsigned int var_29 = 499842799U;
unsigned long long int var_30 = 874346796489313887ULL;
signed char var_31 = (signed char)-70;
unsigned int var_32 = 558731758U;
unsigned int var_33 = 914230956U;
signed char var_34 = (signed char)-45;
long long int var_35 = 472349204371999454LL;
int var_36 = 2058855130;
_Bool var_37 = (_Bool)1;
int var_38 = 1835052932;
unsigned char var_39 = (unsigned char)211;
unsigned short var_40 = (unsigned short)5151;
_Bool var_41 = (_Bool)1;
unsigned long long int var_42 = 12628212012575985693ULL;
int var_43 = -973984867;
unsigned int var_44 = 2387894648U;
unsigned char var_45 = (unsigned char)115;
unsigned long long int var_46 = 6839957476789860662ULL;
unsigned long long int var_47 = 11652661692529299417ULL;
unsigned short var_48 = (unsigned short)12418;
unsigned char var_49 = (unsigned char)5;
unsigned short var_50 = (unsigned short)41327;
unsigned short var_51 = (unsigned short)2506;
short var_52 = (short)31596;
long long int var_53 = 8531097204865702793LL;
unsigned long long int var_54 = 1131307328462777719ULL;
short var_55 = (short)8022;
unsigned int var_56 = 1687314716U;
signed char var_57 = (signed char)-97;
unsigned int var_58 = 3708536290U;
unsigned long long int var_59 = 17832221710501516872ULL;
unsigned long long int var_60 = 3962618927850311896ULL;
long long int var_61 = -4564908316611916024LL;
void init() {
}

void checksum() {
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
    hash(&seed, var_60);
    hash(&seed, var_61);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
