#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5829262687190016074LL;
short var_1 = (short)-332;
long long int var_2 = 7295643109296962151LL;
long long int var_3 = 5775201932869340485LL;
long long int var_5 = -8603353187330325881LL;
long long int var_6 = -8441319004528299027LL;
long long int var_7 = -5789463188301327190LL;
unsigned short var_8 = (unsigned short)50104;
long long int var_10 = 6168225881588880158LL;
unsigned long long int var_12 = 9975926336343651467ULL;
int zero = 0;
long long int var_14 = 7910903085440947599LL;
unsigned long long int var_15 = 15951839701451057179ULL;
long long int var_16 = 4313264793356120939LL;
short var_17 = (short)-5740;
unsigned char var_18 = (unsigned char)77;
short var_19 = (short)-14861;
long long int var_20 = 2602620847611423371LL;
long long int var_21 = -5986064121133255551LL;
_Bool arr_0 [25] ;
unsigned short arr_1 [25] [25] ;
long long int arr_2 [25] [25] ;
unsigned char arr_3 [25] [25] ;
short arr_4 [25] [25] [25] [25] ;
unsigned long long int arr_5 [25] [25] [25] [25] ;
unsigned char arr_6 [25] [25] ;
long long int arr_7 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)4755;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = -8415897007410173628LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)154;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)-22775 : (short)19358;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 17469338113073001891ULL : 4597511984943774272ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)12 : (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -5260212753573204916LL : 283800296393848119LL;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
