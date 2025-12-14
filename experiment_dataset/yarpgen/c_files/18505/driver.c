#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = -7063177660718131354LL;
signed char var_2 = (signed char)26;
long long int var_3 = 2214934369304458322LL;
long long int var_4 = 943816172001034002LL;
unsigned int var_5 = 2678282852U;
unsigned short var_6 = (unsigned short)12882;
long long int var_7 = 2516655930539185611LL;
unsigned short var_8 = (unsigned short)57125;
unsigned int var_9 = 1761238991U;
unsigned char var_10 = (unsigned char)158;
unsigned long long int var_11 = 13591552499951765449ULL;
signed char var_12 = (signed char)-18;
unsigned long long int var_13 = 16451250763993223406ULL;
unsigned int var_14 = 3581856758U;
unsigned int var_15 = 3660735562U;
int zero = 0;
int var_16 = -166569889;
long long int var_17 = 6107345325872948434LL;
unsigned long long int var_18 = 11704068008317797612ULL;
unsigned char var_19 = (unsigned char)135;
_Bool var_20 = (_Bool)1;
short var_21 = (short)10453;
unsigned short var_22 = (unsigned short)7954;
_Bool var_23 = (_Bool)0;
int var_24 = -1263736409;
int var_25 = -1265684088;
unsigned long long int var_26 = 13267164887907102388ULL;
unsigned short var_27 = (unsigned short)45228;
int var_28 = -1355941452;
unsigned long long int var_29 = 6410357195388080079ULL;
int var_30 = 1734232137;
long long int var_31 = -1827435654536024329LL;
unsigned long long int var_32 = 15760257579779549039ULL;
short var_33 = (short)13316;
unsigned long long int var_34 = 14296699487165910305ULL;
unsigned int var_35 = 3143503826U;
long long int var_36 = -290002819447479106LL;
unsigned int var_37 = 2960073136U;
long long int var_38 = -7215044948766980488LL;
short var_39 = (short)10993;
unsigned int var_40 = 1062848790U;
unsigned long long int var_41 = 5265599274561853681ULL;
short var_42 = (short)4970;
int var_43 = -518562311;
unsigned int var_44 = 2087167616U;
short var_45 = (short)3666;
unsigned char var_46 = (unsigned char)202;
unsigned int var_47 = 2405771182U;
long long int var_48 = 6653806018529765884LL;
unsigned int var_49 = 208220570U;
unsigned int var_50 = 2250998125U;
unsigned int var_51 = 89588129U;
short var_52 = (short)20000;
_Bool var_53 = (_Bool)0;
short var_54 = (short)27236;
unsigned int var_55 = 1664533842U;
unsigned char var_56 = (unsigned char)44;
unsigned int var_57 = 873651702U;
unsigned int var_58 = 1000218007U;
int var_59 = -1649814714;
_Bool var_60 = (_Bool)0;
short var_61 = (short)-32716;
void init() {
}

void checksum() {
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
