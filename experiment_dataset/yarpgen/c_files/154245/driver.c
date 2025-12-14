#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16178699666228336510ULL;
unsigned long long int var_1 = 17329422154041308840ULL;
short var_2 = (short)-26521;
short var_3 = (short)-13155;
short var_4 = (short)26819;
short var_5 = (short)19323;
short var_6 = (short)24151;
short var_7 = (short)-14178;
short var_8 = (short)21073;
unsigned short var_9 = (unsigned short)56152;
unsigned char var_10 = (unsigned char)81;
unsigned short var_11 = (unsigned short)26741;
short var_12 = (short)8334;
unsigned char var_14 = (unsigned char)206;
short var_15 = (short)15849;
unsigned long long int var_16 = 6887401956987034208ULL;
short var_17 = (short)-18625;
unsigned long long int var_18 = 13185046563439604631ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)94;
unsigned char var_21 = (unsigned char)87;
short var_22 = (short)-30473;
short var_23 = (short)-21143;
unsigned long long int var_24 = 8461333937486034529ULL;
unsigned long long int var_25 = 18228528036878418956ULL;
unsigned char var_26 = (unsigned char)190;
unsigned char var_27 = (unsigned char)29;
short var_28 = (short)11489;
short var_29 = (short)-9577;
unsigned long long int var_30 = 14206712313284909380ULL;
unsigned char var_31 = (unsigned char)108;
short var_32 = (short)12112;
short var_33 = (short)31725;
unsigned long long int var_34 = 12920923228789037595ULL;
unsigned short var_35 = (unsigned short)26326;
unsigned long long int var_36 = 541340545662428649ULL;
unsigned long long int var_37 = 17249884084844372308ULL;
unsigned char arr_1 [24] [24] ;
short arr_2 [24] [24] ;
short arr_3 [24] [24] ;
unsigned short arr_4 [24] [24] ;
short arr_6 [13] ;
unsigned char arr_12 [13] [13] [13] [13] ;
unsigned short arr_27 [13] [13] [13] ;
unsigned char arr_29 [13] [13] [13] [13] ;
unsigned long long int arr_36 [17] [17] ;
short arr_38 [17] [17] ;
unsigned char arr_45 [15] ;
short arr_53 [15] [15] [15] ;
unsigned long long int arr_9 [13] [13] ;
unsigned long long int arr_19 [13] [13] ;
unsigned short arr_22 [13] [13] ;
unsigned long long int arr_23 [13] [13] [13] ;
short arr_35 [13] [13] ;
unsigned short arr_39 [17] ;
unsigned long long int arr_40 [17] ;
short arr_41 [17] ;
unsigned char arr_46 [15] [15] ;
short arr_47 [15] ;
short arr_59 [15] [15] [15] ;
unsigned long long int arr_60 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)207;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-24648;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-4655;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)5843;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (short)-4410;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)56900 : (unsigned short)55190;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (unsigned char)7;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_36 [i_0] [i_1] = 1160093104330971847ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_38 [i_0] [i_1] = (short)-24872;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_45 [i_0] = (unsigned char)200;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_53 [i_0] [i_1] [i_2] = (short)-7709;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = 18023549157305066341ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? 9163053780242767348ULL : 18034984878076984055ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_22 [i_0] [i_1] = (unsigned short)65260;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = 7298997358195664080ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_35 [i_0] [i_1] = (short)-20723;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_39 [i_0] = (unsigned short)9278;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_40 [i_0] = 10700092479768407054ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_41 [i_0] = (short)60;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_46 [i_0] [i_1] = (unsigned char)116;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_47 [i_0] = (short)14059;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_59 [i_0] [i_1] [i_2] = (short)-7122;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_60 [i_0] = 9181831037028231592ULL;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_23 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_35 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_39 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_40 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_41 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_46 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_47 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_59 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_60 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
