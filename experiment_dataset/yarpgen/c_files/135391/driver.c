#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2631717003U;
unsigned long long int var_1 = 16200835134597789159ULL;
signed char var_2 = (signed char)-124;
short var_3 = (short)-162;
unsigned int var_4 = 112036287U;
unsigned int var_5 = 3693215670U;
unsigned int var_6 = 581396519U;
short var_7 = (short)-25190;
signed char var_8 = (signed char)-47;
int var_9 = 1248410225;
signed char var_10 = (signed char)91;
short var_11 = (short)-23367;
signed char var_12 = (signed char)-75;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)32179;
int zero = 0;
long long int var_15 = 5837090533124458143LL;
unsigned short var_16 = (unsigned short)14411;
unsigned char var_17 = (unsigned char)116;
unsigned int var_18 = 2697056739U;
signed char var_19 = (signed char)58;
long long int var_20 = 251318558536360868LL;
unsigned int var_21 = 2131864584U;
int var_22 = -960562866;
signed char var_23 = (signed char)81;
unsigned long long int var_24 = 14628725976257884367ULL;
signed char var_25 = (signed char)-63;
int var_26 = 437814732;
unsigned long long int var_27 = 8080472600528406858ULL;
unsigned long long int var_28 = 6904436726321297651ULL;
short var_29 = (short)10302;
unsigned char var_30 = (unsigned char)41;
unsigned char var_31 = (unsigned char)150;
_Bool var_32 = (_Bool)1;
unsigned char var_33 = (unsigned char)32;
unsigned int var_34 = 657490212U;
unsigned int var_35 = 527436781U;
unsigned char var_36 = (unsigned char)20;
signed char var_37 = (signed char)-34;
unsigned long long int var_38 = 7878787760108660694ULL;
signed char var_39 = (signed char)-125;
long long int var_40 = 3664500428079108130LL;
unsigned int var_41 = 1187233192U;
unsigned short var_42 = (unsigned short)13472;
short var_43 = (short)1333;
unsigned int var_44 = 969940098U;
unsigned char var_45 = (unsigned char)253;
signed char var_46 = (signed char)52;
signed char var_47 = (signed char)45;
long long int var_48 = -8754993200118589982LL;
long long int var_49 = 7593842796116034414LL;
unsigned long long int var_50 = 5616547985226834624ULL;
unsigned long long int var_51 = 9128392986505725450ULL;
unsigned short arr_1 [19] ;
unsigned short arr_2 [19] ;
unsigned int arr_3 [19] ;
int arr_7 [15] ;
_Bool arr_8 [15] ;
unsigned short arr_10 [15] [15] ;
long long int arr_12 [15] [15] [15] ;
unsigned int arr_13 [15] ;
long long int arr_14 [15] [15] [15] [15] ;
unsigned int arr_15 [15] [15] [15] [15] [15] ;
long long int arr_16 [15] [15] [15] [15] ;
unsigned short arr_18 [23] ;
unsigned short arr_19 [23] ;
unsigned char arr_21 [13] [13] ;
unsigned int arr_22 [13] [13] ;
unsigned char arr_23 [13] [13] ;
signed char arr_25 [13] [13] [13] [13] ;
unsigned int arr_30 [13] [13] [13] [13] [13] ;
signed char arr_36 [13] [13] [13] ;
int arr_41 [13] [13] ;
unsigned int arr_42 [13] [13] [13] [13] ;
unsigned char arr_43 [13] [13] ;
short arr_46 [13] [13] [13] [13] [13] ;
int arr_47 [13] [13] [13] [13] [13] ;
int arr_63 [13] ;
short arr_68 [13] [13] [13] [13] [13] ;
long long int arr_4 [19] ;
short arr_5 [19] ;
signed char arr_6 [19] ;
unsigned short arr_9 [15] [15] ;
unsigned char arr_17 [15] ;
unsigned short arr_20 [23] [23] ;
unsigned int arr_32 [13] ;
signed char arr_49 [13] [13] [13] [13] [13] ;
int arr_52 [13] ;
unsigned char arr_56 [13] ;
long long int arr_80 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)44882;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)53218;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 359917599U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 1917524574;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)61263 : (unsigned short)60164;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 6146245767642803495LL : 6847685763508206669LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 1030121453U : 1941869122U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = -2410226167436189481LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = 2890117068U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = -5470544809575391902LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_18 [i_0] = (unsigned short)32263;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_19 [i_0] = (unsigned short)18385;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_21 [i_0] [i_1] = (unsigned char)155;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_22 [i_0] [i_1] = 2837901766U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_23 [i_0] [i_1] = (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (signed char)24;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] = 2428218442U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = (signed char)36;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_41 [i_0] [i_1] = (i_0 % 2 == 0) ? 458072224 : -395705441;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_42 [i_0] [i_1] [i_2] [i_3] = 1485645928U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_43 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)7 : (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_46 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-32358;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_47 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 405783990 : -1986896333;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_63 [i_0] = 1715362615;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_68 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)18143;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 7870643672074491006LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (short)-27864;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (signed char)81;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)36821 : (unsigned short)46587;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (unsigned char)93 : (unsigned char)178;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_20 [i_0] [i_1] = (unsigned short)62099;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_32 [i_0] = (i_0 % 2 == 0) ? 901117501U : 1932557906U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_49 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (signed char)-38 : (signed char)102;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_52 [i_0] = (i_0 % 2 == 0) ? 1575169158 : 107272246;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_56 [i_0] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_80 [i_0] = (i_0 % 2 == 0) ? 8207672221673466750LL : 8927054951641349842LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        hash(&seed, arr_49 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_52 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_56 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_80 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
