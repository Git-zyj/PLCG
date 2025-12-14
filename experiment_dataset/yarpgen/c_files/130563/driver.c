#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2520544334U;
unsigned int var_1 = 2565484204U;
long long int var_2 = -7352148665668914193LL;
unsigned long long int var_3 = 6177983444958526613ULL;
signed char var_4 = (signed char)26;
signed char var_5 = (signed char)48;
unsigned int var_6 = 3632448642U;
int var_7 = 1433962714;
unsigned long long int var_8 = 9311127001577747563ULL;
signed char var_9 = (signed char)-18;
int zero = 0;
short var_10 = (short)9981;
unsigned char var_11 = (unsigned char)88;
unsigned int var_12 = 3630590046U;
signed char var_13 = (signed char)73;
short var_14 = (short)-8334;
signed char var_15 = (signed char)117;
int var_16 = -601850889;
unsigned long long int var_17 = 7985755973992357563ULL;
short var_18 = (short)5686;
short var_19 = (short)21090;
unsigned char var_20 = (unsigned char)76;
short var_21 = (short)-22426;
unsigned int var_22 = 3409162547U;
signed char var_23 = (signed char)-75;
signed char var_24 = (signed char)35;
long long int var_25 = -1162097756894947644LL;
unsigned int var_26 = 860487992U;
int var_27 = -1003867129;
int var_28 = -1493868797;
short var_29 = (short)-3161;
unsigned long long int var_30 = 4847063660321382206ULL;
unsigned int var_31 = 92525466U;
signed char var_32 = (signed char)0;
int var_33 = 1577773880;
unsigned char var_34 = (unsigned char)16;
unsigned int var_35 = 3740678258U;
unsigned long long int var_36 = 5775642982893102405ULL;
short var_37 = (short)-21759;
unsigned short var_38 = (unsigned short)9933;
int var_39 = 862224875;
long long int var_40 = -5272778977225393916LL;
_Bool var_41 = (_Bool)1;
unsigned int var_42 = 150655868U;
unsigned int var_43 = 608680684U;
signed char var_44 = (signed char)-69;
unsigned int var_45 = 1922213204U;
long long int var_46 = 1879638903290993538LL;
unsigned long long int var_47 = 4632856265731178684ULL;
unsigned long long int var_48 = 1120218375398166412ULL;
signed char var_49 = (signed char)-108;
unsigned int var_50 = 3243404172U;
short var_51 = (short)22632;
unsigned long long int var_52 = 10763581780584824445ULL;
unsigned int var_53 = 2020765419U;
long long int arr_0 [15] ;
signed char arr_3 [13] ;
short arr_7 [13] ;
signed char arr_9 [13] [13] [13] ;
signed char arr_10 [13] [13] [13] [13] ;
signed char arr_11 [13] [13] [13] [13] [13] [13] ;
int arr_12 [13] [13] [13] [13] [13] [13] ;
unsigned char arr_13 [13] [13] ;
unsigned long long int arr_16 [13] [13] [13] [13] [13] [13] ;
signed char arr_17 [13] [13] [13] ;
signed char arr_18 [13] [13] [13] ;
unsigned long long int arr_21 [13] [13] [13] ;
unsigned char arr_22 [13] [13] ;
unsigned long long int arr_25 [13] [13] [13] [13] [13] ;
long long int arr_29 [13] [13] [13] [13] ;
unsigned long long int arr_30 [13] [13] [13] ;
int arr_33 [13] [13] ;
signed char arr_42 [13] [13] ;
unsigned long long int arr_51 [13] [13] [13] [13] [13] [13] ;
unsigned int arr_53 [13] ;
short arr_55 [13] [13] [13] [13] [13] ;
signed char arr_68 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = -2128804924423375620LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)127 : (signed char)29;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (short)11779;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)49 : (signed char)46;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)-24 : (signed char)81;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (signed char)12 : (signed char)3;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? -1390553195 : -100257347;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)191;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? 11579917369173902511ULL : 259204843738595562ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)88 : (signed char)-113;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)31 : (signed char)68;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 16287727559363553804ULL : 3145351865525330215ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_22 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)187 : (unsigned char)177;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = 13844673926979594223ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 3130841976994302562LL : 4888589369585009989LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = 1294034268202900761ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_33 [i_0] [i_1] = 1023017165;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_42 [i_0] [i_1] = (signed char)73;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_51 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 16166130890919207712ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_53 [i_0] = (i_0 % 2 == 0) ? 1522198061U : 1713916356U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_55 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (short)6762 : (short)20075;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_68 [i_0] = (signed char)109;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
