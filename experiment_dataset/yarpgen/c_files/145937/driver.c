#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7001364811009325902LL;
int var_2 = 1292314810;
long long int var_3 = -9126114398170290168LL;
int var_4 = -1809564;
unsigned short var_5 = (unsigned short)61312;
unsigned int var_6 = 701198606U;
unsigned short var_7 = (unsigned short)53644;
unsigned int var_8 = 3147095597U;
long long int var_10 = -4636547403299514677LL;
long long int var_11 = -5214715714361221169LL;
unsigned short var_12 = (unsigned short)16356;
int zero = 0;
int var_14 = -532527356;
unsigned int var_15 = 2062585384U;
long long int var_16 = 6407864140012173666LL;
unsigned int var_17 = 3222114732U;
unsigned short var_18 = (unsigned short)11126;
int var_19 = -2002261537;
unsigned short var_20 = (unsigned short)63648;
unsigned short var_21 = (unsigned short)8091;
unsigned int var_22 = 584211027U;
long long int var_23 = 6015068021472945538LL;
int var_24 = -675439818;
unsigned short var_25 = (unsigned short)47799;
unsigned int var_26 = 4145919570U;
unsigned int var_27 = 227304779U;
unsigned short var_28 = (unsigned short)65030;
long long int var_29 = 1737723867898007859LL;
long long int var_30 = -8773877383777174190LL;
int var_31 = -83396102;
unsigned int var_32 = 3434959839U;
unsigned int arr_0 [14] [14] ;
long long int arr_1 [14] ;
long long int arr_2 [14] ;
int arr_3 [14] ;
unsigned int arr_4 [14] [14] ;
unsigned short arr_7 [14] [14] [14] ;
long long int arr_8 [14] [14] [14] ;
unsigned short arr_9 [14] ;
unsigned short arr_12 [14] [14] [14] ;
int arr_15 [14] [14] [14] [14] ;
int arr_17 [14] [14] [14] [14] [14] [14] ;
long long int arr_18 [14] [14] ;
int arr_23 [14] [14] ;
unsigned int arr_24 [14] ;
long long int arr_28 [22] ;
unsigned short arr_29 [22] ;
unsigned int arr_34 [17] ;
long long int arr_5 [14] ;
long long int arr_10 [14] [14] [14] ;
int arr_13 [14] [14] [14] ;
unsigned int arr_20 [14] [14] [14] [14] [14] ;
int arr_21 [14] [14] [14] ;
unsigned int arr_25 [14] ;
unsigned int arr_26 [14] [14] [14] ;
unsigned int arr_27 [14] [14] [14] ;
int arr_32 [22] ;
unsigned int arr_35 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 264584754U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = -7852266219231450601LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 4899576880099798053LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 1863896477;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = 1966417343U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)63721;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -2101599051980074095LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (unsigned short)17874;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)8666 : (unsigned short)23930;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = -209224020;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1597798755;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_18 [i_0] [i_1] = (i_1 % 2 == 0) ? 4992862759189374075LL : -1235259970537268866LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_23 [i_0] [i_1] = -636063443;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_24 [i_0] = 2709542960U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_28 [i_0] = 1830545350284402427LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_29 [i_0] = (unsigned short)34318;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_34 [i_0] = 2484660096U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = -7795432575613843443LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = -1376880013008382044LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -947030427 : -1856839484;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 1387863151U : 759165488U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2033725526 : -1562162069;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_25 [i_0] = 2348468722U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = 3410176831U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = 652267614U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_32 [i_0] = 1984239831;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_35 [i_0] [i_1] = 2733109627U;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_26 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_27 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_35 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
