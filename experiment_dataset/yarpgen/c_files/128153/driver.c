#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15826291042182758536ULL;
signed char var_1 = (signed char)-56;
unsigned short var_2 = (unsigned short)14932;
short var_3 = (short)-8065;
unsigned char var_4 = (unsigned char)104;
unsigned char var_5 = (unsigned char)44;
int var_6 = -1570494204;
short var_7 = (short)27630;
int var_8 = -288143948;
unsigned short var_9 = (unsigned short)65013;
unsigned int var_10 = 3687088490U;
short var_11 = (short)21763;
short var_12 = (short)6047;
unsigned short var_13 = (unsigned short)55396;
short var_14 = (short)23513;
unsigned long long int var_15 = 3798201734862906248ULL;
signed char var_16 = (signed char)-64;
int zero = 0;
long long int var_17 = 1648340461257041846LL;
signed char var_18 = (signed char)101;
short var_19 = (short)-13262;
unsigned short var_20 = (unsigned short)36379;
long long int var_21 = -8136652532998896821LL;
_Bool var_22 = (_Bool)0;
short var_23 = (short)-1755;
unsigned short var_24 = (unsigned short)44454;
_Bool var_25 = (_Bool)0;
signed char var_26 = (signed char)-36;
unsigned int var_27 = 2736869250U;
unsigned short var_28 = (unsigned short)5233;
long long int var_29 = -4132073010764977881LL;
_Bool var_30 = (_Bool)0;
int var_31 = 602637947;
int var_32 = -1929147012;
int var_33 = -1253696084;
unsigned long long int var_34 = 1595893620515998345ULL;
signed char var_35 = (signed char)-60;
unsigned short var_36 = (unsigned short)53777;
unsigned int var_37 = 3681219404U;
unsigned long long int var_38 = 3983055705819914662ULL;
short var_39 = (short)-30259;
short var_40 = (short)12285;
unsigned int var_41 = 2884803264U;
unsigned short var_42 = (unsigned short)30180;
signed char var_43 = (signed char)-123;
short var_44 = (short)-4388;
short var_45 = (short)10760;
unsigned char var_46 = (unsigned char)146;
unsigned long long int var_47 = 14416485125431784487ULL;
unsigned int var_48 = 3280435208U;
int var_49 = -707652354;
int var_50 = 347717178;
unsigned char var_51 = (unsigned char)194;
unsigned int var_52 = 4155648683U;
long long int var_53 = -275492016674100455LL;
signed char var_54 = (signed char)114;
unsigned short var_55 = (unsigned short)29575;
unsigned char var_56 = (unsigned char)208;
unsigned int var_57 = 3635952414U;
unsigned int var_58 = 358756341U;
int var_59 = -1101507634;
unsigned short var_60 = (unsigned short)50369;
unsigned short var_61 = (unsigned short)64942;
unsigned short var_62 = (unsigned short)24742;
short var_63 = (short)31032;
unsigned int arr_0 [19] ;
long long int arr_2 [19] ;
unsigned long long int arr_3 [19] [19] ;
unsigned short arr_5 [19] [19] ;
unsigned int arr_6 [19] ;
unsigned short arr_7 [19] [19] ;
unsigned int arr_10 [19] ;
unsigned char arr_12 [19] [19] [19] ;
short arr_13 [19] [19] ;
short arr_14 [19] [19] [19] [19] ;
unsigned long long int arr_17 [19] [19] [19] [19] [19] [19] ;
unsigned long long int arr_18 [19] [19] [19] [19] [19] [19] ;
short arr_21 [19] [19] [19] [19] [19] ;
unsigned short arr_23 [19] [19] [19] [19] [19] [19] [19] ;
short arr_24 [19] [19] [19] [19] [19] [19] [19] ;
int arr_25 [19] [19] [19] [19] ;
unsigned short arr_26 [19] [19] [19] ;
short arr_27 [19] [19] [19] [19] [19] [19] [19] ;
unsigned int arr_41 [19] ;
signed char arr_42 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 1794910587U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = -5197405962216127142LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = 10782047431493155517ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)6672;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 3783017618U : 2892227538U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)33781;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 1226784426U : 85332608U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned char)160;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_13 [i_0] [i_1] = (short)5928;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)27995 : (short)-3975;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? 17863069921820585651ULL : 181883853347015104ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? 14856624137445798721ULL : 9539297364647429016ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (short)29171 : (short)-10945;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 19; ++i_6) 
                                arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)33705;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 19; ++i_6) 
                                arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_0 % 2 == 0) ? (short)13724 : (short)-26766;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = -1297117527;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (unsigned short)44977;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 19; ++i_6) 
                                arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)-13453;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_41 [i_0] = 514605695U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_42 [i_0] [i_1] = (signed char)121;
}

void checksum() {
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
    hash(&seed, var_62);
    hash(&seed, var_63);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
