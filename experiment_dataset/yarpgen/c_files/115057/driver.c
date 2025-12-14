#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6032598564132939410ULL;
unsigned short var_1 = (unsigned short)35398;
signed char var_2 = (signed char)-18;
signed char var_3 = (signed char)-53;
short var_4 = (short)2677;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)18555;
unsigned long long int var_9 = 6462476928158503513ULL;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-16395;
short var_13 = (short)3712;
unsigned int var_16 = 3155475066U;
unsigned short var_18 = (unsigned short)50172;
signed char var_19 = (signed char)2;
int zero = 0;
short var_20 = (short)-15496;
unsigned short var_21 = (unsigned short)2385;
unsigned short var_22 = (unsigned short)21023;
_Bool var_23 = (_Bool)0;
unsigned int var_24 = 2998515043U;
unsigned short var_25 = (unsigned short)49026;
int var_26 = 1890112737;
unsigned short var_27 = (unsigned short)14004;
int var_28 = 1225050809;
unsigned short var_29 = (unsigned short)62593;
_Bool var_30 = (_Bool)0;
unsigned short var_31 = (unsigned short)16810;
unsigned int var_32 = 2758950394U;
signed char var_33 = (signed char)9;
unsigned long long int var_34 = 8316700952712994193ULL;
int var_35 = -1839033825;
long long int var_36 = -1549941648952589639LL;
short var_37 = (short)-17059;
unsigned short var_38 = (unsigned short)60416;
unsigned short var_39 = (unsigned short)62766;
unsigned long long int var_40 = 15048543610009270561ULL;
int var_41 = -1582737796;
unsigned int var_42 = 1598276686U;
unsigned short var_43 = (unsigned short)49187;
_Bool var_44 = (_Bool)0;
_Bool var_45 = (_Bool)1;
signed char var_46 = (signed char)-9;
_Bool var_47 = (_Bool)0;
int var_48 = 2066490142;
int var_49 = 600753259;
int var_50 = -287958267;
int var_51 = -395690042;
int var_52 = 1499229835;
_Bool var_53 = (_Bool)1;
_Bool var_54 = (_Bool)1;
int var_55 = 1262253492;
short var_56 = (short)-25170;
unsigned int arr_0 [25] ;
int arr_1 [25] ;
_Bool arr_2 [25] [25] ;
unsigned long long int arr_3 [15] ;
short arr_6 [24] ;
unsigned short arr_7 [24] [24] ;
unsigned char arr_8 [24] [24] ;
_Bool arr_9 [24] ;
long long int arr_10 [24] ;
unsigned int arr_11 [24] [24] ;
int arr_16 [24] [24] [24] [24] [24] ;
short arr_17 [24] [24] [24] ;
_Bool arr_18 [24] [24] [24] [24] ;
int arr_19 [24] [24] [24] [24] [24] ;
unsigned short arr_20 [24] [24] [24] [24] [24] [24] ;
unsigned int arr_23 [24] ;
int arr_27 [24] [24] [24] [24] ;
_Bool arr_40 [16] ;
short arr_43 [16] [16] [16] ;
unsigned char arr_45 [16] [16] ;
unsigned int arr_52 [16] [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 3721039826U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -353108042;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 11293263893773228764ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (short)-4987;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)61573;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)203;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = -1010012232982919000LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = 1174792154U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = -1926255525;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)26660 : (short)15932;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? -809091920 : -1013817810;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (unsigned short)10725 : (unsigned short)20134;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_23 [i_0] = 1684282639U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = -1994742770;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_40 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_43 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-30671 : (short)4529;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_45 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)174 : (unsigned char)185;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_52 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 3271805983U : 176123582U;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
