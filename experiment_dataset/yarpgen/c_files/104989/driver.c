#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-103;
short var_2 = (short)11297;
unsigned char var_3 = (unsigned char)234;
unsigned int var_4 = 3783398646U;
signed char var_6 = (signed char)-127;
unsigned long long int var_7 = 4679205961265423268ULL;
unsigned char var_8 = (unsigned char)254;
unsigned char var_11 = (unsigned char)193;
unsigned int var_12 = 2202804376U;
unsigned short var_13 = (unsigned short)6155;
unsigned int var_14 = 370858613U;
unsigned short var_15 = (unsigned short)29305;
int var_17 = -1418439827;
unsigned short var_18 = (unsigned short)55784;
unsigned long long int var_19 = 4331131916600787291ULL;
int zero = 0;
long long int var_20 = -4132389848455181193LL;
unsigned int var_21 = 3729694565U;
unsigned char var_22 = (unsigned char)39;
signed char var_23 = (signed char)16;
short var_24 = (short)28921;
unsigned int var_25 = 2883073341U;
unsigned long long int var_26 = 8756574967352337510ULL;
long long int var_27 = 2251259723019755511LL;
_Bool var_28 = (_Bool)1;
unsigned char var_29 = (unsigned char)137;
signed char var_30 = (signed char)39;
unsigned long long int var_31 = 9029992802859851077ULL;
unsigned long long int var_32 = 11056307770676939415ULL;
unsigned short var_33 = (unsigned short)55312;
unsigned short var_34 = (unsigned short)18456;
int var_35 = 1275071827;
unsigned char var_36 = (unsigned char)206;
unsigned int var_37 = 140801958U;
int var_38 = 1438502869;
unsigned long long int var_39 = 1572649012210518156ULL;
int var_40 = 851488026;
long long int var_41 = 4746649236023539731LL;
int var_42 = -1716914246;
unsigned int var_43 = 1888616006U;
unsigned char var_44 = (unsigned char)8;
signed char var_45 = (signed char)112;
unsigned char var_46 = (unsigned char)38;
unsigned char var_47 = (unsigned char)16;
short var_48 = (short)-31933;
unsigned char var_49 = (unsigned char)226;
unsigned char var_50 = (unsigned char)43;
short var_51 = (short)-29991;
short var_52 = (short)9957;
int var_53 = 32947401;
unsigned long long int var_54 = 4644116814834218401ULL;
unsigned long long int var_55 = 17246186083776150169ULL;
short arr_0 [25] ;
signed char arr_1 [25] ;
unsigned char arr_2 [25] ;
unsigned long long int arr_3 [25] [25] ;
unsigned short arr_4 [25] [25] ;
unsigned char arr_5 [25] ;
_Bool arr_6 [25] [25] ;
unsigned char arr_7 [25] [25] ;
unsigned int arr_9 [25] [25] [25] ;
unsigned char arr_11 [25] [25] ;
int arr_12 [25] ;
unsigned short arr_13 [25] [25] [25] ;
int arr_20 [25] [25] [25] ;
int arr_21 [22] [22] ;
int arr_23 [22] ;
int arr_25 [22] ;
unsigned int arr_27 [22] ;
int arr_31 [22] ;
signed char arr_32 [22] [22] ;
_Bool arr_33 [22] [22] ;
unsigned long long int arr_35 [22] [22] [22] ;
unsigned long long int arr_47 [22] ;
unsigned char arr_50 [22] [22] [22] [22] ;
int arr_51 [22] [22] [22] [22] ;
int arr_52 [22] [22] [22] [22] [22] [22] ;
_Bool arr_8 [25] [25] ;
int arr_15 [25] [25] [25] [25] ;
unsigned long long int arr_16 [25] [25] [25] ;
int arr_41 [22] [22] [22] ;
int arr_44 [22] [22] ;
int arr_45 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (short)-2719;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (signed char)40;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned char)124;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 3150562292493161001ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)35771;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (unsigned char)155;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)63;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 1358794657U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)237;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = -64846767;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned short)40059;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 445756585;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_21 [i_0] [i_1] = 1123653696;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_23 [i_0] = 950454755;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_25 [i_0] = 1478798745;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_27 [i_0] = 3443161391U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_31 [i_0] = 594003472;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_32 [i_0] [i_1] = (signed char)75;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_33 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = 3918565467184794035ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_47 [i_0] = 5481778719066494612ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_50 [i_0] [i_1] [i_2] [i_3] = (unsigned char)78;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_51 [i_0] [i_1] [i_2] [i_3] = 906815069;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_52 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? 1453051732 : 703461444;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 1439982413;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 1124132403916313299ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_41 [i_0] [i_1] [i_2] = 1589697866;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_44 [i_0] [i_1] = 515485768;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_45 [i_0] [i_1] [i_2] = -1199621661;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_41 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_44 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_45 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
