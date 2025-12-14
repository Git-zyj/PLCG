#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)85;
unsigned char var_1 = (unsigned char)90;
unsigned long long int var_2 = 7310200921246792084ULL;
unsigned long long int var_3 = 9818083919310034581ULL;
unsigned long long int var_4 = 13024389519536986825ULL;
unsigned long long int var_5 = 9593089511781250445ULL;
unsigned char var_6 = (unsigned char)254;
unsigned short var_7 = (unsigned short)7758;
unsigned long long int var_8 = 17766904475834899575ULL;
unsigned long long int var_9 = 1965996819165485854ULL;
unsigned long long int var_11 = 8626415435853237213ULL;
unsigned short var_12 = (unsigned short)33288;
unsigned long long int var_13 = 1584294850539120370ULL;
unsigned short var_14 = (unsigned short)43297;
unsigned long long int var_16 = 11512453839833403806ULL;
unsigned long long int var_17 = 10095205139354863524ULL;
short var_18 = (short)27249;
unsigned long long int var_19 = 12543237419877085968ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)206;
unsigned short var_21 = (unsigned short)51980;
unsigned char var_22 = (unsigned char)190;
unsigned long long int var_23 = 4634350852305678498ULL;
unsigned long long int var_24 = 8908853697652930012ULL;
unsigned long long int var_25 = 12166892759718604623ULL;
unsigned long long int var_26 = 1455299142657918514ULL;
unsigned char var_27 = (unsigned char)245;
unsigned long long int var_28 = 7014926627161556015ULL;
unsigned long long int var_29 = 10604097842548922219ULL;
unsigned char var_30 = (unsigned char)226;
unsigned long long int var_31 = 2139349220823733339ULL;
unsigned short var_32 = (unsigned short)24521;
short var_33 = (short)10794;
unsigned short var_34 = (unsigned short)29263;
unsigned short var_35 = (unsigned short)51380;
unsigned short var_36 = (unsigned short)63516;
short var_37 = (short)-23945;
unsigned long long int var_38 = 15629051784779893682ULL;
unsigned char var_39 = (unsigned char)153;
unsigned long long int arr_1 [12] [12] ;
unsigned long long int arr_7 [12] [12] [12] [12] [12] ;
unsigned long long int arr_12 [12] ;
short arr_14 [12] ;
unsigned short arr_18 [12] ;
unsigned char arr_21 [12] [12] [12] [12] [12] [12] ;
unsigned long long int arr_31 [12] [12] ;
short arr_39 [13] [13] ;
short arr_41 [14] ;
unsigned long long int arr_43 [14] ;
unsigned long long int arr_44 [14] [14] ;
unsigned short arr_45 [14] [14] ;
short arr_47 [14] [14] [14] [14] ;
unsigned long long int arr_58 [19] [19] ;
short arr_4 [12] ;
unsigned char arr_10 [12] [12] [12] [12] [12] ;
unsigned char arr_15 [12] ;
short arr_16 [12] [12] [12] [12] [12] [12] ;
unsigned char arr_20 [12] [12] [12] [12] [12] ;
unsigned long long int arr_36 [12] [12] ;
short arr_40 [13] ;
unsigned long long int arr_49 [14] [14] ;
unsigned long long int arr_50 [14] ;
unsigned char arr_56 [14] [14] [14] ;
unsigned short arr_59 [19] [19] ;
unsigned long long int arr_60 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 150449070461988583ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 10458486927567116672ULL : 546556446309923737ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 4817050422872707879ULL : 5588672701551680153ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (short)25615 : (short)-18838;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_18 [i_0] = (unsigned short)61735;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (unsigned char)154 : (unsigned char)145;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_31 [i_0] [i_1] = 8690913509066350181ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_39 [i_0] [i_1] = (short)-19278;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_41 [i_0] = (short)5732;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_43 [i_0] = 12744530629220425260ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_44 [i_0] [i_1] = 9361077574588919195ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_45 [i_0] [i_1] = (unsigned short)40223;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_47 [i_0] [i_1] [i_2] [i_3] = (short)17893;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_58 [i_0] [i_1] = 9213457718388749424ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)15485 : (short)12505;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (unsigned char)114 : (unsigned char)204;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (unsigned char)43 : (unsigned char)4;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (short)13815 : (short)-23070;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (unsigned char)248 : (unsigned char)19;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_36 [i_0] [i_1] = (i_0 % 2 == 0) ? 18019962744846350875ULL : 10101834979510612436ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_40 [i_0] = (short)15052;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_49 [i_0] [i_1] = 10211232727639343506ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_50 [i_0] = 11165195425565203582ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_56 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)44 : (unsigned char)166;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_59 [i_0] [i_1] = (unsigned short)30186;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_60 [i_0] = 8859886024167188961ULL;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_36 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_40 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_49 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_50 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_56 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_59 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_60 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
