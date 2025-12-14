#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5007361493658900283LL;
signed char var_1 = (signed char)101;
unsigned char var_2 = (unsigned char)209;
unsigned short var_3 = (unsigned short)54418;
unsigned int var_4 = 2528610140U;
unsigned char var_5 = (unsigned char)25;
unsigned int var_6 = 2953253455U;
unsigned char var_7 = (unsigned char)211;
short var_8 = (short)-21021;
int var_9 = 1667155650;
signed char var_10 = (signed char)-69;
int zero = 0;
unsigned char var_11 = (unsigned char)211;
unsigned long long int var_12 = 13885412200101358119ULL;
short var_13 = (short)17468;
long long int var_14 = -3045191283574997322LL;
unsigned short var_15 = (unsigned short)61871;
unsigned short var_16 = (unsigned short)14198;
long long int var_17 = -2748039319649843458LL;
long long int var_18 = 1110851605534115204LL;
unsigned int var_19 = 3500731119U;
unsigned long long int var_20 = 14442254363944286615ULL;
unsigned char var_21 = (unsigned char)138;
int var_22 = 1061836910;
short var_23 = (short)-7808;
int var_24 = -1676612047;
int var_25 = 1820310271;
unsigned long long int var_26 = 16234106398906644438ULL;
unsigned short var_27 = (unsigned short)26737;
int var_28 = -199415247;
unsigned int var_29 = 3282312746U;
long long int var_30 = 2231207448748542243LL;
int var_31 = -1405974195;
unsigned long long int var_32 = 7980905143422706935ULL;
long long int var_33 = 7073216405400839726LL;
long long int var_34 = -4030701461783634804LL;
_Bool var_35 = (_Bool)0;
signed char var_36 = (signed char)-82;
signed char var_37 = (signed char)38;
long long int var_38 = -4901515720432291882LL;
short var_39 = (short)19148;
long long int var_40 = -4217886827235881900LL;
unsigned long long int var_41 = 16963233141409281044ULL;
short var_42 = (short)21251;
unsigned char var_43 = (unsigned char)151;
int var_44 = 222414420;
int var_45 = 1086691456;
signed char var_46 = (signed char)-126;
_Bool var_47 = (_Bool)0;
_Bool var_48 = (_Bool)1;
unsigned long long int var_49 = 210088446011165295ULL;
long long int var_50 = 8897922572458728953LL;
unsigned short var_51 = (unsigned short)59964;
unsigned short var_52 = (unsigned short)31038;
signed char var_53 = (signed char)-70;
unsigned int var_54 = 1333332085U;
int var_55 = 1575099192;
unsigned short var_56 = (unsigned short)31576;
long long int var_57 = 6781005346425965138LL;
unsigned long long int var_58 = 18257007539528909074ULL;
signed char var_59 = (signed char)-74;
short var_60 = (short)2430;
_Bool var_61 = (_Bool)0;
unsigned int var_62 = 2254029454U;
unsigned short var_63 = (unsigned short)29896;
unsigned long long int var_64 = 8286805755310139243ULL;
short var_65 = (short)-22061;
int var_66 = 2113826462;
short var_67 = (short)7485;
int var_68 = 926254991;
unsigned char var_69 = (unsigned char)46;
_Bool var_70 = (_Bool)0;
short var_71 = (short)-15004;
unsigned short var_72 = (unsigned short)39565;
long long int arr_1 [10] ;
unsigned char arr_3 [10] [10] ;
short arr_4 [10] [10] ;
int arr_7 [10] [10] ;
unsigned short arr_14 [10] [10] ;
unsigned char arr_17 [10] [10] [10] [10] ;
signed char arr_21 [10] [10] [10] [10] [10] [10] [10] ;
short arr_25 [10] [10] [10] [10] [10] [10] ;
short arr_26 [10] [10] [10] [10] [10] ;
unsigned long long int arr_27 [10] [10] [10] [10] ;
int arr_28 [10] [10] [10] [10] [10] [10] [10] ;
short arr_29 [10] [10] [10] [10] [10] ;
int arr_30 [10] [10] [10] [10] ;
short arr_31 [10] [10] [10] [10] [10] [10] ;
unsigned int arr_45 [10] [10] [10] ;
unsigned char arr_50 [10] ;
int arr_54 [10] [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 5875821783738762302LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (short)24712;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = -1837676457;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)16650 : (unsigned short)7801;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)43 : (unsigned char)108;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 10; ++i_6) 
                                arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (signed char)-111;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-5394;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)22548;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = 12003469431938331456ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 10; ++i_6) 
                                arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = -726926304;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (short)-30909 : (short)925;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = -624815650;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-28120;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_45 [i_0] [i_1] [i_2] = 531052009U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_50 [i_0] = (unsigned char)13;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_54 [i_0] [i_1] [i_2] [i_3] [i_4] = -1564114847;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
