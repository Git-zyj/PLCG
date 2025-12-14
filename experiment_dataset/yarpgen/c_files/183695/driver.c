#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12927282139764908611ULL;
unsigned int var_2 = 2494214599U;
unsigned int var_5 = 2962108384U;
unsigned long long int var_6 = 13772114062231444882ULL;
int var_7 = -210600996;
unsigned long long int var_8 = 7224978743259836304ULL;
signed char var_9 = (signed char)-84;
short var_10 = (short)14871;
unsigned char var_11 = (unsigned char)5;
unsigned char var_12 = (unsigned char)190;
short var_13 = (short)28479;
int zero = 0;
unsigned char var_14 = (unsigned char)104;
short var_15 = (short)21132;
signed char var_16 = (signed char)-73;
short var_17 = (short)-2885;
short var_18 = (short)-28898;
unsigned long long int var_19 = 2431738352096464854ULL;
unsigned long long int var_20 = 923316527463219612ULL;
short var_21 = (short)-3998;
unsigned char var_22 = (unsigned char)203;
long long int var_23 = 1884952622112080401LL;
unsigned long long int var_24 = 6083472133068235318ULL;
unsigned long long int var_25 = 13881904919472954396ULL;
unsigned long long int var_26 = 8690933635443401841ULL;
unsigned long long int var_27 = 1326954994762225191ULL;
unsigned long long int var_28 = 4666876464607973905ULL;
short var_29 = (short)-17398;
unsigned char var_30 = (unsigned char)177;
unsigned short var_31 = (unsigned short)21387;
unsigned short var_32 = (unsigned short)36865;
unsigned long long int var_33 = 10616081647346273796ULL;
unsigned long long int var_34 = 12024420127548649578ULL;
unsigned long long int var_35 = 15594728788626179964ULL;
int var_36 = 1420418590;
unsigned char var_37 = (unsigned char)234;
unsigned short var_38 = (unsigned short)41521;
unsigned int var_39 = 4217412576U;
short var_40 = (short)6122;
unsigned long long int var_41 = 2370734128097425341ULL;
long long int arr_1 [14] ;
unsigned long long int arr_3 [23] ;
unsigned int arr_4 [23] ;
unsigned long long int arr_5 [23] [23] ;
long long int arr_6 [23] [23] [23] ;
unsigned long long int arr_7 [23] [23] ;
int arr_9 [23] ;
unsigned long long int arr_10 [23] [23] [23] [23] ;
unsigned char arr_11 [23] [23] [23] ;
unsigned char arr_14 [23] [23] [23] [23] [23] [23] ;
unsigned short arr_16 [23] [23] [23] [23] [23] ;
unsigned long long int arr_17 [23] [23] [23] ;
int arr_21 [23] [23] [23] [23] ;
unsigned long long int arr_25 [15] [15] ;
unsigned short arr_27 [15] [15] [15] ;
signed char arr_41 [15] [15] ;
unsigned long long int arr_15 [23] [23] [23] [23] ;
unsigned short arr_18 [23] [23] [23] [23] [23] [23] [23] ;
unsigned long long int arr_19 [23] ;
short arr_30 [15] ;
short arr_44 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 2819238680472715101LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 5237743639896705801ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 264552156U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = 15710048335545730705ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 6110524455417130963LL : 4223686672518926257LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = 1249627094793589634ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = 1398391400;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 17370686104285469170ULL : 9343910780598898567ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)206 : (unsigned char)141;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? (unsigned char)217 : (unsigned char)186;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)11750;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 16994096705882412725ULL : 3422716117814693528ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = 1502714851;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_25 [i_0] [i_1] = 11364574026733648344ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)44178 : (unsigned short)39406;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_41 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-120 : (signed char)6;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 2768407178723063866ULL : 9525416093486879902ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_5 % 2 == 0) ? (unsigned short)53487 : (unsigned short)40502;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 6617956380058696983ULL : 13740810760733997579ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_30 [i_0] = (i_0 % 2 == 0) ? (short)-14866 : (short)-17635;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_44 [i_0] = (i_0 % 2 == 0) ? (short)7639 : (short)-7995;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_44 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
