#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36611;
unsigned short var_1 = (unsigned short)32943;
long long int var_2 = -8570680997902804537LL;
unsigned char var_3 = (unsigned char)147;
int var_4 = -634443259;
long long int var_5 = -8539936391971720652LL;
int var_6 = 2146772998;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)91;
unsigned char var_10 = (unsigned char)7;
unsigned short var_11 = (unsigned short)47403;
unsigned long long int var_12 = 8247762643191089481ULL;
long long int var_13 = 4511593395564420019LL;
int zero = 0;
unsigned short var_14 = (unsigned short)51290;
long long int var_15 = 3050278403871781388LL;
long long int var_16 = -6422180721806365484LL;
long long int var_17 = 8963498206531617643LL;
unsigned short var_18 = (unsigned short)35804;
_Bool var_19 = (_Bool)1;
long long int var_20 = -191429256903827711LL;
int var_21 = -2124200686;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 9148305372358757954ULL;
_Bool var_24 = (_Bool)0;
_Bool var_25 = (_Bool)1;
long long int var_26 = -5236368850090585260LL;
unsigned short var_27 = (unsigned short)32621;
long long int var_28 = 5857384289785018795LL;
long long int var_29 = 5167227423501153615LL;
long long int var_30 = 1211835569058318428LL;
_Bool var_31 = (_Bool)1;
unsigned short var_32 = (unsigned short)15566;
int var_33 = 1000827450;
unsigned short var_34 = (unsigned short)19796;
_Bool var_35 = (_Bool)1;
long long int var_36 = 7106001765607753386LL;
long long int var_37 = 6326588921933103775LL;
long long int var_38 = -8846178830388484230LL;
unsigned char var_39 = (unsigned char)85;
int var_40 = 119871973;
unsigned char var_41 = (unsigned char)107;
unsigned long long int var_42 = 9407810051289833692ULL;
_Bool var_43 = (_Bool)1;
long long int var_44 = 6202848089970100453LL;
unsigned short var_45 = (unsigned short)4104;
_Bool var_46 = (_Bool)0;
int var_47 = -1182652340;
unsigned short var_48 = (unsigned short)19441;
_Bool var_49 = (_Bool)1;
int var_50 = -343470265;
_Bool var_51 = (_Bool)0;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
