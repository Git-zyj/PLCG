#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)3012;
signed char var_2 = (signed char)-125;
long long int var_3 = -3825119450410918549LL;
unsigned int var_4 = 3489114059U;
unsigned char var_5 = (unsigned char)146;
long long int var_6 = 5657844433857309355LL;
signed char var_7 = (signed char)-28;
unsigned int var_8 = 39023058U;
signed char var_9 = (signed char)-54;
unsigned long long int var_10 = 1405361251522375182ULL;
unsigned short var_11 = (unsigned short)47749;
unsigned long long int var_12 = 16641437591130404433ULL;
unsigned char var_13 = (unsigned char)215;
long long int var_14 = -951233311596166834LL;
long long int var_15 = -5371248066483505793LL;
unsigned char var_16 = (unsigned char)79;
int zero = 0;
unsigned short var_17 = (unsigned short)25473;
long long int var_18 = 3158392155922781987LL;
unsigned char var_19 = (unsigned char)75;
signed char var_20 = (signed char)122;
unsigned int var_21 = 3145228252U;
short var_22 = (short)-14696;
signed char var_23 = (signed char)34;
short var_24 = (short)3711;
signed char var_25 = (signed char)45;
unsigned short var_26 = (unsigned short)37221;
long long int var_27 = -1163338819496343788LL;
long long int var_28 = 2156733942585191558LL;
unsigned long long int var_29 = 13752624102206093907ULL;
unsigned char var_30 = (unsigned char)156;
unsigned char var_31 = (unsigned char)60;
unsigned int var_32 = 2304911813U;
long long int var_33 = 6240628344735851410LL;
short var_34 = (short)-1639;
unsigned char var_35 = (unsigned char)48;
unsigned int var_36 = 3449509045U;
long long int var_37 = 7184351551989720197LL;
unsigned char var_38 = (unsigned char)203;
long long int var_39 = -2386729226879308209LL;
long long int arr_0 [21] [21] ;
unsigned long long int arr_1 [21] ;
unsigned long long int arr_2 [21] ;
unsigned long long int arr_3 [21] [21] ;
unsigned long long int arr_4 [21] [21] [21] ;
unsigned char arr_5 [21] [21] [21] ;
long long int arr_6 [21] [21] [21] [21] ;
unsigned int arr_7 [21] [21] [21] ;
long long int arr_15 [12] ;
long long int arr_17 [12] [12] ;
unsigned char arr_19 [12] [12] ;
unsigned long long int arr_24 [12] [12] [12] ;
long long int arr_28 [12] [12] ;
short arr_31 [12] [12] [12] [12] ;
unsigned char arr_32 [12] [12] [12] [12] ;
unsigned long long int arr_37 [12] [12] ;
unsigned long long int arr_39 [12] [12] ;
unsigned long long int arr_44 [12] [12] [12] [12] [12] [12] ;
signed char arr_48 [19] ;
signed char arr_50 [19] ;
long long int arr_8 [21] [21] [21] [21] ;
unsigned long long int arr_9 [21] [21] [21] ;
long long int arr_10 [21] [21] ;
unsigned short arr_11 [21] ;
long long int arr_20 [12] [12] [12] ;
long long int arr_21 [12] [12] [12] ;
long long int arr_22 [12] [12] [12] ;
unsigned long long int arr_23 [12] ;
unsigned int arr_26 [12] ;
unsigned long long int arr_35 [12] [12] [12] ;
long long int arr_38 [12] [12] [12] ;
unsigned int arr_46 [12] [12] ;
unsigned int arr_51 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 8651943198866262705LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 3308202367608982323ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 17227658540215991959ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = 18066568043811071531ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 16721762213332810086ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)210;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = -8376597468595824178LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 3140492802U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = 8434557171716973845LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_17 [i_0] [i_1] = 1975627756192222156LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_19 [i_0] [i_1] = (unsigned char)186;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = 963209853017829425ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_28 [i_0] [i_1] = 395653126863537542LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = (short)19079;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = (unsigned char)231;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_37 [i_0] [i_1] = 10365295351543801882ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_39 [i_0] [i_1] = 6069587095051249628ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1071073135348648146ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_48 [i_0] = (signed char)-69;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_50 [i_0] = (signed char)81;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = -2990660894059772048LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 5628968958329098262ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = 1475274808652207581LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (unsigned short)19676;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = -7198402023710135887LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = -5632393482609167423LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = 48776582989768254LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_23 [i_0] = 6116325533817426530ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_26 [i_0] = 2180116897U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = 341091406933405663ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = 3685035844700003927LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_46 [i_0] [i_1] = 39811872U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_51 [i_0] = 1906880963U;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_35 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_38 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_46 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_51 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
