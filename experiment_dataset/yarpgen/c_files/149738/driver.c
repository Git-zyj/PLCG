#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)110;
unsigned long long int var_1 = 11085344477881925704ULL;
unsigned short var_2 = (unsigned short)46830;
unsigned char var_3 = (unsigned char)100;
unsigned char var_4 = (unsigned char)179;
long long int var_5 = -6758616867334268837LL;
unsigned int var_6 = 882251506U;
long long int var_7 = -8356412947370774613LL;
long long int var_8 = -838120156669821434LL;
long long int var_9 = -1603729939988216773LL;
unsigned char var_10 = (unsigned char)5;
long long int var_11 = -7833312973308512884LL;
unsigned char var_12 = (unsigned char)203;
int zero = 0;
unsigned int var_13 = 2368164542U;
short var_14 = (short)6070;
long long int var_15 = -3616655844038657738LL;
unsigned char var_16 = (unsigned char)41;
unsigned int var_17 = 1436868648U;
unsigned short var_18 = (unsigned short)31953;
unsigned int var_19 = 799419883U;
unsigned long long int var_20 = 8104327769731637426ULL;
unsigned short var_21 = (unsigned short)61774;
unsigned char var_22 = (unsigned char)184;
short var_23 = (short)-5818;
short var_24 = (short)-14285;
unsigned char var_25 = (unsigned char)95;
unsigned int var_26 = 901736947U;
long long int var_27 = -5752241967949371912LL;
unsigned long long int var_28 = 8874103578116881714ULL;
long long int var_29 = 4422039495540285693LL;
unsigned long long int var_30 = 15483779296046526934ULL;
long long int var_31 = 8312214494062622750LL;
unsigned short var_32 = (unsigned short)59999;
long long int var_33 = 4328627769895364068LL;
long long int var_34 = 8395310797917456920LL;
long long int var_35 = 8901967316970361940LL;
unsigned int var_36 = 3539384129U;
unsigned long long int var_37 = 2052453204081908951ULL;
unsigned int var_38 = 1497767428U;
long long int var_39 = 1207824748330655995LL;
long long int var_40 = 9136949507313634739LL;
short var_41 = (short)-14806;
long long int var_42 = -1595393288906592187LL;
unsigned char arr_0 [19] [19] ;
short arr_3 [19] ;
unsigned char arr_4 [19] ;
short arr_5 [19] [19] [19] ;
unsigned int arr_6 [19] [19] [19] ;
long long int arr_7 [19] [19] [19] ;
unsigned char arr_8 [19] [19] [19] ;
long long int arr_10 [19] [19] [19] [19] ;
unsigned int arr_11 [19] ;
unsigned char arr_12 [19] ;
unsigned char arr_13 [19] [19] ;
long long int arr_14 [19] [19] [19] ;
long long int arr_18 [19] ;
long long int arr_19 [19] ;
long long int arr_22 [19] [19] [19] ;
long long int arr_24 [19] [19] [19] [19] ;
unsigned char arr_27 [19] [19] ;
unsigned int arr_28 [19] ;
unsigned char arr_32 [19] ;
unsigned int arr_33 [19] [19] [19] ;
unsigned short arr_34 [19] [19] [19] ;
short arr_36 [19] [19] [19] ;
unsigned char arr_38 [19] [19] [19] [19] ;
unsigned int arr_40 [19] [19] [19] [19] [19] ;
unsigned int arr_47 [18] ;
long long int arr_50 [18] ;
unsigned int arr_16 [19] [19] ;
short arr_17 [19] [19] [19] ;
unsigned int arr_29 [19] ;
unsigned char arr_41 [19] [19] ;
unsigned short arr_42 [19] ;
unsigned long long int arr_48 [18] [18] ;
unsigned int arr_51 [18] ;
unsigned int arr_57 [18] [18] [18] ;
short arr_61 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)9;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (short)-11117;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (unsigned char)85;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-8374 : (short)-7361;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3180002003U : 1677426795U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 6772697623581538011LL : -2860475978711604879LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)66;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = -3932509624400615231LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = 2030295786U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = (unsigned char)203;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)199;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 6378932632670304640LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_18 [i_0] = -8450068056589801930LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_19 [i_0] = 6801635324457676075LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -1935254166912472351LL : -6627828986571102176LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = 69145804204452132LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_27 [i_0] [i_1] = (unsigned char)133;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_28 [i_0] = 3411219036U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_32 [i_0] = (unsigned char)55;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = 2414973197U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (unsigned short)56279;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)3783 : (short)-25261;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_38 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)228 : (unsigned char)60;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 3950124659U : 156306990U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_47 [i_0] = 3048496879U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_50 [i_0] = -1105943401178639935LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_16 [i_0] [i_1] = (i_1 % 2 == 0) ? 3178165173U : 1937896053U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-11163 : (short)-30774;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_29 [i_0] = 668530909U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_41 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)65 : (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_42 [i_0] = (unsigned short)37883;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_48 [i_0] [i_1] = 6283280861363076904ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_51 [i_0] = 1597590078U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_57 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2483578705U : 311610529U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_61 [i_0] = (i_0 % 2 == 0) ? (short)18563 : (short)15937;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_41 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_42 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_48 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_51 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_57 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_61 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
