#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 186066915;
unsigned char var_1 = (unsigned char)188;
int var_3 = -1854443536;
unsigned short var_5 = (unsigned short)616;
unsigned char var_10 = (unsigned char)54;
unsigned char var_11 = (unsigned char)99;
int var_12 = -1199119222;
unsigned short var_13 = (unsigned short)14875;
unsigned char var_14 = (unsigned char)61;
unsigned short var_15 = (unsigned short)41147;
unsigned int var_16 = 1097804215U;
int zero = 0;
unsigned int var_17 = 2019860589U;
int var_18 = 1256692318;
unsigned char var_19 = (unsigned char)49;
unsigned char var_20 = (unsigned char)49;
int var_21 = 1506827147;
unsigned char var_22 = (unsigned char)78;
long long int var_23 = 6968264425067758946LL;
unsigned char var_24 = (unsigned char)146;
int var_25 = -753051762;
unsigned int var_26 = 4016601446U;
unsigned char var_27 = (unsigned char)14;
unsigned char var_28 = (unsigned char)161;
unsigned char var_29 = (unsigned char)145;
unsigned char var_30 = (unsigned char)198;
long long int var_31 = -529196313414141231LL;
unsigned char var_32 = (unsigned char)158;
int var_33 = 88787805;
unsigned short var_34 = (unsigned short)25579;
long long int var_35 = 1701243850579035251LL;
unsigned short var_36 = (unsigned short)49438;
unsigned int var_37 = 3501642343U;
long long int var_38 = -2194621184739706221LL;
unsigned int var_39 = 4071727213U;
unsigned int var_40 = 50211949U;
unsigned char var_41 = (unsigned char)164;
unsigned char var_42 = (unsigned char)58;
unsigned short var_43 = (unsigned short)32100;
unsigned int arr_1 [17] ;
unsigned char arr_2 [17] [17] ;
unsigned short arr_3 [17] [17] ;
unsigned char arr_4 [17] [17] [17] ;
unsigned char arr_5 [17] ;
unsigned int arr_6 [17] [17] ;
int arr_7 [17] ;
unsigned char arr_10 [14] ;
long long int arr_12 [14] ;
unsigned int arr_13 [14] ;
unsigned short arr_14 [14] [14] [14] ;
unsigned char arr_17 [14] [14] [14] [14] ;
unsigned char arr_18 [14] [14] [14] [14] ;
long long int arr_19 [14] [14] [14] [14] [14] ;
unsigned char arr_24 [14] ;
int arr_28 [14] [14] ;
unsigned char arr_29 [14] [14] [14] [14] ;
unsigned char arr_30 [14] [14] [14] ;
int arr_33 [14] [14] [14] [14] [14] ;
unsigned char arr_34 [14] [14] [14] [14] ;
int arr_8 [17] ;
int arr_9 [17] [17] [17] ;
unsigned char arr_27 [14] ;
long long int arr_35 [14] [14] [14] [14] [14] ;
unsigned short arr_45 [14] [14] ;
long long int arr_46 [14] [14] ;
unsigned int arr_47 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 2481575839U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)55;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)50253;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)11 : (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (unsigned char)127;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 1383433884U : 3919417628U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = 174247767;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = 5382398100094614575LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = 2042400335U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned short)60097;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)188 : (unsigned char)210;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = -1918593811543455579LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_24 [i_0] = (unsigned char)231;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_28 [i_0] [i_1] = -1284801530;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)130 : (unsigned char)89;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (unsigned char)85;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? -1959491467 : 1917562942;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)85 : (unsigned char)225;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 519755248 : 2143526991;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 43409743 : 1543114940;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? (unsigned char)232 : (unsigned char)115;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 7759530399439208650LL : 548966706950020795LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_45 [i_0] [i_1] = (unsigned short)54426;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_46 [i_0] [i_1] = 9068584417562770319LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_47 [i_0] [i_1] [i_2] = 2934573787U;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_45 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_46 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_47 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
