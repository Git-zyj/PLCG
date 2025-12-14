#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6403;
unsigned int var_1 = 1846686865U;
unsigned int var_4 = 3908330879U;
unsigned short var_5 = (unsigned short)42331;
signed char var_6 = (signed char)-103;
long long int var_8 = -9130285136243195843LL;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-7;
int var_14 = 1336254240;
int var_15 = -501704765;
signed char var_16 = (signed char)-117;
signed char var_17 = (signed char)41;
unsigned long long int var_18 = 4584536527943205226ULL;
unsigned long long int var_19 = 6696869462474928035ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = 8594319309810637466LL;
long long int var_22 = -4081796311010607949LL;
long long int var_23 = -5906430916472562920LL;
int var_24 = 403119825;
long long int var_25 = -7235599313942467981LL;
signed char var_26 = (signed char)46;
long long int var_27 = -5006298310561643709LL;
signed char var_28 = (signed char)25;
unsigned char var_29 = (unsigned char)26;
unsigned short var_30 = (unsigned short)10110;
int var_31 = 80159113;
unsigned short var_32 = (unsigned short)61994;
long long int var_33 = 1219872654086260908LL;
long long int var_34 = -7984310053776399509LL;
signed char var_35 = (signed char)(-127 - 1);
long long int var_36 = -257868276539160105LL;
long long int var_37 = -5322912804276482984LL;
signed char var_38 = (signed char)-22;
int var_39 = -1251231893;
_Bool var_40 = (_Bool)1;
_Bool var_41 = (_Bool)0;
long long int var_42 = -8224255946678538756LL;
unsigned long long int var_43 = 9971847223596345165ULL;
int var_44 = -1222890315;
short var_45 = (short)29446;
signed char var_46 = (signed char)-85;
unsigned short var_47 = (unsigned short)30914;
long long int var_48 = -2306272832888742046LL;
signed char var_49 = (signed char)-26;
int var_50 = 2128725620;
long long int var_51 = 7889269379735274262LL;
int var_52 = 1989924503;
int var_53 = -2107670165;
unsigned long long int var_54 = 17356377147092480903ULL;
long long int var_55 = -8055088691353310997LL;
unsigned short var_56 = (unsigned short)61609;
long long int var_57 = -1745757013428545559LL;
unsigned short var_58 = (unsigned short)25325;
signed char var_59 = (signed char)118;
short var_60 = (short)-23629;
unsigned short var_61 = (unsigned short)38425;
signed char var_62 = (signed char)-111;
unsigned short var_63 = (unsigned short)4367;
unsigned char var_64 = (unsigned char)144;
unsigned int var_65 = 1133789300U;
unsigned short var_66 = (unsigned short)32753;
long long int var_67 = 8033134928241242169LL;
short var_68 = (short)28275;
signed char var_69 = (signed char)92;
int var_70 = -344355343;
signed char var_71 = (signed char)67;
signed char var_72 = (signed char)-12;
short var_73 = (short)32467;
unsigned short var_74 = (unsigned short)39721;
signed char var_75 = (signed char)101;
unsigned short var_76 = (unsigned short)22776;
long long int arr_0 [16] ;
long long int arr_1 [16] ;
short arr_2 [16] ;
unsigned char arr_3 [16] ;
long long int arr_4 [16] [16] ;
int arr_5 [16] ;
unsigned short arr_6 [16] [16] [16] ;
long long int arr_7 [16] [16] [16] ;
unsigned int arr_8 [16] [16] [16] ;
unsigned short arr_9 [16] [16] [16] [16] ;
int arr_10 [16] ;
signed char arr_11 [16] ;
int arr_12 [16] [16] [16] ;
long long int arr_14 [16] [16] [16] [16] ;
long long int arr_15 [16] [16] [16] [16] ;
unsigned long long int arr_16 [16] [16] [16] [16] ;
short arr_17 [16] [16] ;
unsigned int arr_18 [16] [16] [16] ;
unsigned char arr_20 [16] ;
int arr_21 [16] [16] [16] ;
int arr_22 [16] [16] ;
unsigned short arr_26 [16] [16] [16] ;
unsigned int arr_29 [16] [16] [16] [16] ;
signed char arr_30 [16] [16] [16] ;
unsigned int arr_32 [16] ;
unsigned long long int arr_35 [16] ;
unsigned long long int arr_38 [16] ;
long long int arr_47 [16] [16] ;
signed char arr_50 [16] [16] [16] ;
long long int arr_53 [16] [16] ;
long long int arr_66 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 2509160902904486531LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 7602942723255655027LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (short)12729;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned char)201;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = -2139026012031340984LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 1783155140;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)48958;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -2663977845702869325LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 1621812653U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned short)6602;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? -134632254 : -1417071472;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (signed char)20;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 960494749;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 5494041380522947084LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 822630464671252811LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = 1554560813868373321ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_17 [i_0] [i_1] = (short)24092;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 3259415130U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (unsigned char)190 : (unsigned char)122;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = -298569063;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_22 [i_0] [i_1] = -643123946;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (unsigned short)2469;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = 2955915964U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (signed char)-20;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_32 [i_0] = 2977234518U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_35 [i_0] = (i_0 % 2 == 0) ? 8632035801058798910ULL : 10943869035212338702ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_38 [i_0] = 17667942207420565649ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_47 [i_0] [i_1] = (i_0 % 2 == 0) ? -3859333584873285452LL : -5579411963418019519LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_50 [i_0] [i_1] [i_2] = (signed char)-58;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_53 [i_0] [i_1] = 187926407298429817LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_66 [i_0] [i_1] = -8414843897901786234LL;
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
    hash(&seed, var_76);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
