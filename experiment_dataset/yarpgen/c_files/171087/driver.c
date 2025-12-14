#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3166060330900084367ULL;
short var_3 = (short)-32662;
long long int var_4 = 1807019830906221551LL;
unsigned long long int var_7 = 3962703304261723087ULL;
short var_8 = (short)18617;
unsigned short var_10 = (unsigned short)8765;
long long int var_11 = 7040204324375079303LL;
short var_13 = (short)-22853;
int var_16 = -246822304;
int zero = 0;
unsigned char var_17 = (unsigned char)95;
unsigned long long int var_18 = 55203931577642238ULL;
unsigned long long int var_19 = 3843937019109155209ULL;
unsigned char var_20 = (unsigned char)117;
unsigned short var_21 = (unsigned short)54157;
unsigned char var_22 = (unsigned char)54;
signed char var_23 = (signed char)-5;
unsigned long long int var_24 = 9014737775037425276ULL;
unsigned long long int var_25 = 14289978077790101477ULL;
unsigned short var_26 = (unsigned short)60714;
unsigned short var_27 = (unsigned short)60709;
signed char arr_0 [20] [20] ;
unsigned short arr_1 [20] ;
signed char arr_2 [20] [20] ;
short arr_3 [20] ;
unsigned long long int arr_6 [20] [20] ;
short arr_8 [20] [20] [20] [20] ;
unsigned short arr_9 [20] [20] [20] [20] ;
unsigned int arr_10 [20] [20] ;
short arr_15 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-52;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned short)16999;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)19;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (short)28734;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 8489321826275296690ULL : 6115929716099917951ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)8803 : (short)-1877;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned short)16623;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? 2271133437U : 1284860361U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (short)16683 : (short)21923;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
