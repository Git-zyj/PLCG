#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4667706094375626420ULL;
unsigned long long int var_1 = 877179883022852340ULL;
short var_2 = (short)23563;
unsigned char var_3 = (unsigned char)85;
short var_4 = (short)-30883;
_Bool var_5 = (_Bool)0;
int var_6 = -1447187316;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)8489;
unsigned long long int var_9 = 15752644227058882935ULL;
int var_10 = -1381977471;
unsigned long long int var_11 = 17160071925022762791ULL;
unsigned long long int var_12 = 5981891897263254277ULL;
int zero = 0;
unsigned long long int var_13 = 12892351510893560610ULL;
unsigned long long int var_14 = 1794991051014197079ULL;
short var_15 = (short)-32200;
short var_16 = (short)22617;
unsigned char var_17 = (unsigned char)74;
unsigned char var_18 = (unsigned char)234;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 10126017278330600953ULL;
unsigned long long int var_21 = 14715849428640898241ULL;
unsigned long long int var_22 = 6652949477937155362ULL;
unsigned long long int var_23 = 12048568058136846120ULL;
_Bool var_24 = (_Bool)0;
unsigned char var_25 = (unsigned char)8;
unsigned char var_26 = (unsigned char)78;
_Bool var_27 = (_Bool)1;
signed char var_28 = (signed char)13;
_Bool var_29 = (_Bool)0;
_Bool var_30 = (_Bool)0;
unsigned long long int var_31 = 17069382148048906481ULL;
short var_32 = (short)8164;
unsigned long long int var_33 = 17837501587685252436ULL;
short var_34 = (short)14983;
short var_35 = (short)-22470;
unsigned char var_36 = (unsigned char)57;
short var_37 = (short)-3412;
short var_38 = (short)14990;
unsigned long long int var_39 = 15763286000551381704ULL;
unsigned long long int var_40 = 15952937958479204443ULL;
int var_41 = -35062742;
int var_42 = -673610631;
_Bool var_43 = (_Bool)0;
unsigned short var_44 = (unsigned short)24454;
short var_45 = (short)22810;
unsigned long long int var_46 = 7552321684257481157ULL;
unsigned long long int var_47 = 17391103176442043471ULL;
_Bool var_48 = (_Bool)0;
int var_49 = 366017623;
int var_50 = 1183716617;
unsigned long long int var_51 = 13039503559038602836ULL;
signed char var_52 = (signed char)-53;
unsigned long long int var_53 = 8017577671429406641ULL;
unsigned long long int var_54 = 4029473848899648917ULL;
_Bool var_55 = (_Bool)0;
int var_56 = -288547286;
_Bool var_57 = (_Bool)0;
signed char var_58 = (signed char)120;
unsigned long long int var_59 = 4976022269273855709ULL;
_Bool var_60 = (_Bool)1;
unsigned long long int var_61 = 13262719125557149585ULL;
unsigned char var_62 = (unsigned char)212;
unsigned long long int var_63 = 6332194811650368196ULL;
unsigned long long int var_64 = 11930735069823892956ULL;
int var_65 = 807752358;
unsigned char var_66 = (unsigned char)15;
unsigned long long int var_67 = 15036414185315377575ULL;
int var_68 = 1110183503;
unsigned long long int arr_0 [16] ;
unsigned long long int arr_1 [16] ;
unsigned long long int arr_2 [16] ;
unsigned char arr_3 [16] [16] ;
unsigned short arr_5 [16] [16] [16] [16] ;
_Bool arr_6 [15] [15] ;
unsigned long long int arr_7 [15] ;
_Bool arr_8 [15] ;
unsigned long long int arr_9 [15] [15] [15] ;
unsigned char arr_11 [15] [15] [15] ;
unsigned char arr_12 [15] [15] [15] ;
_Bool arr_13 [15] [15] [15] [15] ;
short arr_14 [15] [15] [15] ;
unsigned long long int arr_18 [15] [15] [15] [15] [15] [15] [15] ;
int arr_22 [13] [13] ;
_Bool arr_24 [13] ;
short arr_26 [13] ;
unsigned char arr_29 [13] [13] [13] ;
short arr_30 [13] [13] [13] [13] ;
int arr_31 [13] [13] [13] [13] [13] [13] ;
short arr_33 [13] [13] [13] [13] [13] [13] [13] ;
unsigned long long int arr_35 [13] ;
unsigned long long int arr_40 [13] [13] [13] ;
unsigned long long int arr_41 [13] [13] [13] ;
int arr_45 [13] [13] [13] [13] [13] [13] ;
_Bool arr_49 [13] [13] [13] [13] [13] ;
unsigned long long int arr_50 [13] [13] [13] ;
short arr_56 [13] [13] [13] [13] [13] [13] ;
unsigned long long int arr_60 [13] [13] [13] [13] ;
_Bool arr_74 [18] [18] ;
short arr_75 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 1696691783115123550ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 8677404524748350992ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 9961754511248099298ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)198;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (unsigned short)24819;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 14133230213472937440ULL : 1831362763510259740ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 5912908193175120838ULL : 3247551435281855904ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)59 : (unsigned char)116;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned char)14;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (short)25275;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 13591046822448545794ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_22 [i_0] [i_1] = -97910878;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_24 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_26 [i_0] = (short)32567;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (unsigned char)251;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = (short)-3715;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 2100449098;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)-17632;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_35 [i_0] = 18012673101243366156ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_40 [i_0] [i_1] [i_2] = 18344808913054476451ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_41 [i_0] [i_1] [i_2] = 8051585970226928131ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_45 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -1552846736;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_49 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_50 [i_0] [i_1] [i_2] = 17931542939930342050ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_56 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)17771;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_60 [i_0] [i_1] [i_2] [i_3] = 10520813744666516313ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_74 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_75 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-6178 : (short)15068;
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
    hash(&seed, var_56);
    hash(&seed, var_57);
    hash(&seed, var_58);
    hash(&seed, var_59);
    hash(&seed, var_60);
    hash(&seed, var_61);
    hash(&seed, var_62);
    hash(&seed, var_63);
    hash(&seed, var_64);
    hash(&seed, var_65);
    hash(&seed, var_66);
    hash(&seed, var_67);
    hash(&seed, var_68);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
