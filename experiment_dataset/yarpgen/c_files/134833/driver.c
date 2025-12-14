#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8008225020220345352LL;
short var_1 = (short)6897;
unsigned char var_2 = (unsigned char)250;
unsigned long long int var_3 = 13668804228495363228ULL;
short var_4 = (short)-21576;
unsigned char var_5 = (unsigned char)102;
long long int var_6 = -3901655370383392196LL;
unsigned long long int var_7 = 3972045323232667347ULL;
unsigned int var_8 = 953466249U;
unsigned int var_9 = 3019098052U;
int zero = 0;
long long int var_10 = 4141839882060832554LL;
unsigned long long int var_11 = 17141769427261947290ULL;
signed char var_12 = (signed char)38;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-79;
unsigned long long int var_15 = 9993211607774633494ULL;
unsigned short var_16 = (unsigned short)59229;
unsigned long long int var_17 = 4090106689254184570ULL;
unsigned long long int var_18 = 14361949994590723712ULL;
unsigned char var_19 = (unsigned char)186;
unsigned long long int var_20 = 12703907099473811465ULL;
unsigned char var_21 = (unsigned char)252;
unsigned int var_22 = 313765172U;
unsigned int var_23 = 448275019U;
unsigned long long int var_24 = 9948052522756135679ULL;
int var_25 = 752934152;
_Bool var_26 = (_Bool)1;
short var_27 = (short)-28472;
signed char var_28 = (signed char)-40;
int var_29 = -210912804;
short var_30 = (short)26334;
long long int var_31 = 2662777167413095123LL;
int var_32 = -1236118597;
int var_33 = -238958048;
int var_34 = -2121224965;
unsigned long long int var_35 = 8954257544744870583ULL;
unsigned long long int var_36 = 16156700958353606938ULL;
signed char var_37 = (signed char)99;
unsigned short var_38 = (unsigned short)25486;
signed char var_39 = (signed char)-65;
_Bool var_40 = (_Bool)0;
signed char var_41 = (signed char)-99;
unsigned short var_42 = (unsigned short)59518;
unsigned long long int var_43 = 11461050041248309904ULL;
unsigned long long int var_44 = 1958584970173326761ULL;
unsigned char var_45 = (unsigned char)144;
unsigned char var_46 = (unsigned char)67;
unsigned char var_47 = (unsigned char)29;
short var_48 = (short)-643;
unsigned long long int var_49 = 11974858702038645085ULL;
long long int var_50 = -5442730369375394366LL;
int var_51 = -52669795;
unsigned long long int var_52 = 4846057157091603907ULL;
signed char var_53 = (signed char)98;
_Bool var_54 = (_Bool)0;
int var_55 = 1427292662;
int var_56 = -343074977;
unsigned int var_57 = 3297694673U;
long long int var_58 = 8692310306900561650LL;
unsigned long long int var_59 = 16449950438239606412ULL;
unsigned long long int var_60 = 14029370720356199407ULL;
unsigned char var_61 = (unsigned char)205;
unsigned short var_62 = (unsigned short)30383;
signed char var_63 = (signed char)115;
short var_64 = (short)32018;
unsigned long long int var_65 = 2998314214535137785ULL;
long long int var_66 = 3343682336370791784LL;
short var_67 = (short)16288;
unsigned int var_68 = 181873045U;
long long int var_69 = 3436975946316090491LL;
_Bool var_70 = (_Bool)1;
int var_71 = -1904390892;
unsigned int var_72 = 1256715491U;
signed char var_73 = (signed char)3;
signed char var_74 = (signed char)18;
unsigned char var_75 = (unsigned char)14;
short arr_0 [13] ;
signed char arr_3 [22] ;
unsigned long long int arr_4 [23] [23] ;
signed char arr_5 [23] ;
unsigned long long int arr_6 [23] [23] ;
signed char arr_7 [23] ;
unsigned int arr_8 [23] ;
short arr_9 [23] [23] ;
short arr_10 [23] ;
int arr_11 [23] [23] [23] [23] ;
_Bool arr_12 [23] [23] [23] ;
unsigned int arr_13 [23] [23] [23] ;
signed char arr_14 [23] [23] [23] ;
short arr_15 [23] [23] [23] [23] ;
unsigned long long int arr_16 [23] [23] [23] [23] ;
unsigned long long int arr_17 [23] [23] [23] [23] ;
short arr_18 [23] [23] [23] [23] ;
unsigned long long int arr_20 [23] [23] [23] [23] ;
unsigned char arr_21 [23] [23] [23] [23] ;
signed char arr_23 [23] [23] [23] [23] [23] [23] ;
signed char arr_24 [23] [23] ;
unsigned long long int arr_25 [23] [23] ;
int arr_27 [23] [23] [23] ;
unsigned int arr_28 [23] [23] [23] ;
signed char arr_31 [23] [23] [23] ;
signed char arr_33 [23] [23] [23] ;
unsigned int arr_37 [22] [22] [22] ;
short arr_40 [22] ;
unsigned int arr_42 [22] ;
unsigned int arr_43 [22] [22] [22] [22] ;
unsigned long long int arr_45 [22] [22] [22] [22] ;
int arr_46 [22] [22] [22] ;
long long int arr_47 [22] [22] [22] [22] ;
int arr_51 [22] [22] [22] [22] [22] [22] ;
_Bool arr_53 [22] [22] [22] [22] ;
unsigned long long int arr_62 [22] [22] [22] [22] [22] ;
unsigned char arr_73 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (short)22750;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (signed char)-11;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 16459366539224613876ULL : 10470816436139057446ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)-97 : (signed char)115;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = 10982139725007195709ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (signed char)-12;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 3172330805U : 543576509U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = (short)-7020;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (short)-29883;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = -1231373715;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2873575148U : 803894363U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (signed char)100;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (short)13703;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = 17430741254783979577ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = 11606155992386246348ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)-3820 : (short)10995;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = 16726333813944141398ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned char)122 : (unsigned char)60;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)60;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_24 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)120 : (signed char)-52;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_25 [i_0] [i_1] = 18167278972661721122ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1915378187 : -1254827246;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 3380500695U : 3153024139U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (signed char)69;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (signed char)56;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = 3723837117U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_40 [i_0] = (short)-10229;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_42 [i_0] = 1082561538U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_43 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 2135413399U : 1171361891U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_45 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 8622034636664995050ULL : 9160215764356107475ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_46 [i_0] [i_1] [i_2] = 395721490;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_47 [i_0] [i_1] [i_2] [i_3] = -321209508624612026LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_51 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1293045254;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_53 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_62 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 641588553343680785ULL : 5404943881497581285ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_73 [i_0] [i_1] [i_2] [i_3] = (unsigned char)129;
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
    hash(&seed, var_64);
    hash(&seed, var_65);
    hash(&seed, var_66);
    hash(&seed, var_67);
    hash(&seed, var_68);
    hash(&seed, var_69);
    hash(&seed, var_70);
    hash(&seed, var_71);
    hash(&seed, var_72);
    hash(&seed, var_73);
    hash(&seed, var_74);
    hash(&seed, var_75);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
