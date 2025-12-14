#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-27597;
long long int var_3 = 3342967774592703126LL;
short var_4 = (short)-19682;
unsigned char var_6 = (unsigned char)252;
unsigned char var_11 = (unsigned char)26;
long long int var_12 = 3557265358256658803LL;
short var_13 = (short)-16992;
short var_14 = (short)16311;
short var_15 = (short)12259;
long long int var_16 = -4367754867584869726LL;
unsigned char var_17 = (unsigned char)6;
int zero = 0;
short var_18 = (short)28612;
short var_19 = (short)4749;
short var_20 = (short)9423;
short var_21 = (short)-16249;
short var_22 = (short)-5165;
long long int var_23 = 1049197351462337835LL;
unsigned char var_24 = (unsigned char)46;
unsigned char var_25 = (unsigned char)201;
long long int var_26 = -6695439996318432214LL;
short var_27 = (short)-4203;
unsigned char var_28 = (unsigned char)0;
long long int var_29 = -6024655448941188127LL;
unsigned char var_30 = (unsigned char)116;
unsigned char var_31 = (unsigned char)99;
long long int var_32 = 3306954326319783069LL;
short var_33 = (short)-9002;
long long int var_34 = -2848551452556146473LL;
long long int var_35 = -3678570746569783247LL;
unsigned char var_36 = (unsigned char)24;
short var_37 = (short)7579;
unsigned char var_38 = (unsigned char)216;
long long int var_39 = -1338476035002863880LL;
long long int var_40 = -8981252782965843603LL;
unsigned char var_41 = (unsigned char)184;
short var_42 = (short)15271;
short var_43 = (short)3156;
short var_44 = (short)13573;
long long int var_45 = -7100389159204118657LL;
unsigned char var_46 = (unsigned char)138;
short var_47 = (short)12942;
unsigned char arr_0 [20] ;
long long int arr_1 [20] ;
short arr_2 [20] [20] [20] ;
unsigned char arr_3 [20] [20] ;
unsigned char arr_4 [20] [20] ;
long long int arr_5 [20] [20] ;
long long int arr_6 [20] ;
long long int arr_8 [20] ;
unsigned char arr_10 [20] [20] [20] [20] [20] ;
long long int arr_11 [20] [20] [20] [20] [20] ;
unsigned char arr_15 [20] [20] ;
unsigned char arr_16 [20] [20] [20] ;
short arr_19 [20] [20] [20] [20] ;
short arr_23 [20] [20] [20] ;
short arr_24 [20] [20] ;
long long int arr_42 [20] ;
unsigned char arr_45 [11] ;
unsigned char arr_7 [20] [20] [20] ;
unsigned char arr_12 [20] ;
long long int arr_13 [20] [20] [20] [20] ;
long long int arr_31 [20] ;
long long int arr_37 [20] [20] [20] [20] ;
unsigned char arr_38 [20] ;
short arr_39 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)120;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 6633506775294235002LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)-2150;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)144;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? -7021830846686987405LL : -3570655249460286918LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = -1150122680519684571LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 5946661412598115858LL : 3198898230994815818LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = -1329507011589396933LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned char)79;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (unsigned char)188;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (short)27026;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (short)23748;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_24 [i_0] [i_1] = (short)-24717;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_42 [i_0] = (i_0 % 2 == 0) ? 4673175471991486250LL : 4544962282258581478LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_45 [i_0] = (unsigned char)175;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)91 : (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned char)106 : (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 1920558275683698783LL : 6536339178886305346LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_31 [i_0] = (i_0 % 2 == 0) ? 2437060474865426079LL : -4914231268078304686LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 8505168288288133598LL : 6728457074873757856LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_38 [i_0] = (unsigned char)9;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_39 [i_0] = (short)-22687;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_31 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_37 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_39 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
