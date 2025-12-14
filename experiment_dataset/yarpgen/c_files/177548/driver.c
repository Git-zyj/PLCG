#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)169;
int var_1 = 552510500;
int var_2 = 1203704010;
unsigned char var_3 = (unsigned char)156;
unsigned int var_4 = 3157075566U;
unsigned char var_5 = (unsigned char)151;
long long int var_6 = 3381797369349245404LL;
_Bool var_7 = (_Bool)0;
long long int var_8 = -209639553483971574LL;
unsigned char var_9 = (unsigned char)7;
int var_10 = -1621739297;
int var_11 = 1924100696;
unsigned long long int var_12 = 10402782315579955703ULL;
int var_13 = 154960611;
int zero = 0;
unsigned long long int var_14 = 5945020670171296619ULL;
unsigned int var_15 = 2742157209U;
unsigned short var_16 = (unsigned short)6291;
short var_17 = (short)-14299;
int var_18 = 1613037250;
long long int var_19 = -2649546605198337690LL;
signed char var_20 = (signed char)121;
int var_21 = 992644195;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)-29;
int var_24 = 585584276;
_Bool var_25 = (_Bool)1;
int var_26 = 1352477239;
long long int var_27 = -2978901017407453928LL;
unsigned short var_28 = (unsigned short)55385;
long long int var_29 = -8418127718405734238LL;
short var_30 = (short)14535;
long long int var_31 = 2562385248601181300LL;
long long int var_32 = 67415834455943646LL;
_Bool var_33 = (_Bool)1;
signed char var_34 = (signed char)52;
unsigned long long int var_35 = 13887516485740420007ULL;
short var_36 = (short)-2110;
unsigned char var_37 = (unsigned char)234;
_Bool var_38 = (_Bool)1;
unsigned short var_39 = (unsigned short)38084;
short var_40 = (short)-4241;
_Bool var_41 = (_Bool)1;
int var_42 = 995099565;
int var_43 = 1611353514;
int var_44 = 2138156893;
long long int var_45 = 1743971827960361464LL;
unsigned long long int var_46 = 7599559600939235929ULL;
unsigned int var_47 = 1442672659U;
_Bool var_48 = (_Bool)1;
unsigned int var_49 = 725215668U;
unsigned int var_50 = 1948347833U;
int var_51 = -1527176423;
short var_52 = (short)-28472;
_Bool var_53 = (_Bool)1;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
