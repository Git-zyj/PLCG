#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)82;
unsigned short var_1 = (unsigned short)35167;
short var_2 = (short)16784;
_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)61;
unsigned long long int var_6 = 6537790522130708879ULL;
long long int var_7 = 260544917599575041LL;
signed char var_8 = (signed char)-33;
unsigned short var_9 = (unsigned short)51099;
signed char var_10 = (signed char)-119;
signed char var_11 = (signed char)1;
unsigned short var_13 = (unsigned short)11810;
long long int var_14 = -3778909380086350209LL;
unsigned short var_15 = (unsigned short)51725;
short var_16 = (short)-26176;
int zero = 0;
signed char var_18 = (signed char)94;
unsigned short var_19 = (unsigned short)14308;
unsigned int var_20 = 1219190341U;
int var_21 = 37803716;
unsigned long long int var_22 = 14379895950926520426ULL;
int var_23 = 1687139072;
signed char var_24 = (signed char)-126;
unsigned long long int var_25 = 13226029137062985259ULL;
unsigned short var_26 = (unsigned short)31236;
signed char var_27 = (signed char)86;
unsigned short var_28 = (unsigned short)11899;
unsigned short var_29 = (unsigned short)61505;
long long int var_30 = -9076419528753051946LL;
short var_31 = (short)-12722;
unsigned short var_32 = (unsigned short)44673;
unsigned char var_33 = (unsigned char)192;
short var_34 = (short)4881;
signed char var_35 = (signed char)-120;
signed char var_36 = (signed char)104;
long long int var_37 = -2275377429139581035LL;
signed char var_38 = (signed char)-37;
signed char var_39 = (signed char)13;
unsigned short var_40 = (unsigned short)45497;
_Bool var_41 = (_Bool)1;
long long int var_42 = -5933236650925207984LL;
unsigned short var_43 = (unsigned short)3021;
short var_44 = (short)-22465;
long long int var_45 = -2163051641036487473LL;
unsigned int var_46 = 1173041193U;
unsigned long long int var_47 = 2204436831866395482ULL;
unsigned int var_48 = 2424095512U;
unsigned short var_49 = (unsigned short)15155;
unsigned short var_50 = (unsigned short)65213;
short var_51 = (short)-14556;
unsigned short var_52 = (unsigned short)44572;
unsigned int var_53 = 1518299152U;
short var_54 = (short)-3693;
unsigned short var_55 = (unsigned short)30098;
unsigned short var_56 = (unsigned short)18427;
unsigned short var_57 = (unsigned short)5611;
short var_58 = (short)27475;
unsigned short var_59 = (unsigned short)42116;
long long int var_60 = -2881021861888573141LL;
signed char var_61 = (signed char)96;
unsigned int var_62 = 1032865476U;
unsigned short arr_0 [22] ;
unsigned short arr_1 [22] ;
short arr_3 [22] ;
short arr_4 [22] ;
unsigned int arr_5 [22] [22] ;
unsigned short arr_6 [22] ;
short arr_7 [12] [12] ;
long long int arr_8 [12] ;
short arr_13 [15] ;
signed char arr_15 [15] [15] [15] ;
unsigned short arr_17 [15] [15] [15] [15] ;
unsigned short arr_18 [15] [15] [15] [15] ;
long long int arr_20 [15] [15] [15] [15] ;
unsigned char arr_21 [15] [15] [15] [15] ;
long long int arr_23 [15] [15] ;
unsigned short arr_24 [15] [15] [15] ;
short arr_27 [15] [15] [15] ;
signed char arr_29 [15] [15] [15] [15] ;
unsigned int arr_31 [15] [15] ;
long long int arr_34 [15] [15] [15] [15] ;
unsigned short arr_36 [15] [15] [15] [15] ;
unsigned short arr_37 [15] [15] [15] [15] ;
unsigned long long int arr_41 [15] [15] ;
short arr_43 [15] ;
unsigned short arr_2 [22] [22] ;
int arr_10 [12] ;
long long int arr_11 [12] ;
long long int arr_12 [12] ;
unsigned short arr_38 [15] [15] [15] [15] ;
short arr_39 [15] [15] [15] [15] ;
unsigned short arr_46 [15] [15] [15] [15] ;
short arr_55 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned short)9468;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned short)38352;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (short)-13112;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (short)30289;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = 4106560454U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (unsigned short)55628;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (short)-23738;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = 4050235015832406499LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = (short)24752;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (signed char)97;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (unsigned short)48275;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (unsigned short)34939;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -1156309886228715003LL : -6547852008134655328LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (unsigned char)136;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_23 [i_0] [i_1] = -6445481099303282218LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (unsigned short)46184;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (short)-8318;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)14 : (signed char)-60;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_31 [i_0] [i_1] = 3181469160U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 1551942265449306178LL : -2173986877650179374LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = (unsigned short)9814;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)64714 : (unsigned short)33035;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_41 [i_0] [i_1] = 7833661400272170587ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_43 [i_0] = (short)9486;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)47083 : (unsigned short)1008;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? -806523863 : 1448653809;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 7014747110991844936LL : -7039467426286658491LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? -7836091264446850539LL : -4965410404973878431LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_38 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)63993 : (unsigned short)36690;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_39 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)23432 : (short)22512;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_46 [i_0] [i_1] [i_2] [i_3] = (unsigned short)60110;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_55 [i_0] [i_1] = (short)14805;
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
    hash(&seed, var_62);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_38 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_39 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_46 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_55 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
