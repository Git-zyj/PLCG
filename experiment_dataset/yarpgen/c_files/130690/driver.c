#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1551407742U;
signed char var_1 = (signed char)29;
unsigned int var_2 = 4175480693U;
int var_3 = 321711042;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)118;
int var_6 = -1322014;
short var_7 = (short)1692;
short var_8 = (short)20816;
long long int var_10 = -1091993821283182549LL;
signed char var_11 = (signed char)-108;
short var_12 = (short)12540;
unsigned int var_13 = 3549524451U;
short var_14 = (short)-31863;
short var_15 = (short)-4628;
unsigned int var_16 = 2950983658U;
unsigned long long int var_17 = 10789568778624501548ULL;
signed char var_18 = (signed char)39;
unsigned int var_19 = 4092636172U;
int zero = 0;
unsigned long long int var_20 = 3248088536772219691ULL;
short var_21 = (short)2320;
unsigned char var_22 = (unsigned char)194;
unsigned int var_23 = 386311731U;
signed char var_24 = (signed char)-8;
unsigned long long int var_25 = 3759085511198437358ULL;
unsigned int var_26 = 964894628U;
short var_27 = (short)-31779;
int var_28 = -1700738478;
unsigned int var_29 = 47796899U;
unsigned char var_30 = (unsigned char)19;
long long int var_31 = -55287068336063052LL;
unsigned long long int var_32 = 9922760713504545763ULL;
unsigned int var_33 = 4079846948U;
unsigned int var_34 = 2031747389U;
unsigned int var_35 = 1801651550U;
_Bool var_36 = (_Bool)1;
int var_37 = -1806266000;
long long int var_38 = -397387240466855426LL;
unsigned int var_39 = 1033752579U;
_Bool var_40 = (_Bool)1;
unsigned int var_41 = 2133265397U;
unsigned short var_42 = (unsigned short)1488;
unsigned int var_43 = 465337503U;
_Bool var_44 = (_Bool)1;
unsigned int var_45 = 1439078083U;
long long int var_46 = -1831576922591818376LL;
short var_47 = (short)6164;
unsigned int var_48 = 2564657989U;
short arr_4 [21] ;
long long int arr_7 [21] ;
unsigned int arr_19 [21] [21] [21] [21] ;
signed char arr_20 [21] [21] [21] [21] ;
unsigned char arr_23 [21] [21] ;
signed char arr_24 [21] ;
signed char arr_32 [21] ;
short arr_43 [21] ;
unsigned int arr_64 [21] [21] [21] ;
unsigned int arr_71 [21] [21] [21] [21] [21] ;
unsigned char arr_72 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (short)31720;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = 3493426166629918659LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 3077366475U : 2531219864U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)35 : (signed char)-11;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_23 [i_0] [i_1] = (unsigned char)60;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_24 [i_0] = (signed char)-124;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_32 [i_0] = (i_0 % 2 == 0) ? (signed char)53 : (signed char)71;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_43 [i_0] = (i_0 % 2 == 0) ? (short)28259 : (short)30063;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_64 [i_0] [i_1] [i_2] = 4272288068U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_71 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 2095989769U : 3411199042U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_72 [i_0] = (unsigned char)201;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_43 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_64 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        hash(&seed, arr_71 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_72 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
