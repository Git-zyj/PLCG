#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)-74;
short var_3 = (short)-24197;
signed char var_4 = (signed char)-13;
signed char var_5 = (signed char)-16;
_Bool var_6 = (_Bool)0;
signed char var_10 = (signed char)-107;
unsigned long long int var_11 = 16699948947564315206ULL;
unsigned char var_12 = (unsigned char)57;
signed char var_13 = (signed char)49;
unsigned int var_14 = 3322757461U;
signed char var_15 = (signed char)-75;
int var_16 = -1263327574;
unsigned char var_18 = (unsigned char)192;
int zero = 0;
int var_19 = -1448135814;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)66;
long long int var_22 = -8615426711634346035LL;
unsigned short var_23 = (unsigned short)14856;
_Bool var_24 = (_Bool)1;
unsigned int var_25 = 2622259570U;
unsigned int var_26 = 41034549U;
unsigned short var_27 = (unsigned short)17189;
unsigned int var_28 = 2018961689U;
unsigned short var_29 = (unsigned short)44712;
unsigned long long int var_30 = 9838222948897852313ULL;
unsigned int var_31 = 2405660726U;
long long int var_32 = 6175281775369350852LL;
long long int var_33 = 7761517506525255379LL;
unsigned short var_34 = (unsigned short)940;
long long int var_35 = 8923998432182499826LL;
unsigned char var_36 = (unsigned char)37;
_Bool var_37 = (_Bool)0;
unsigned char var_38 = (unsigned char)25;
unsigned long long int arr_0 [25] [25] ;
signed char arr_1 [25] ;
unsigned long long int arr_2 [17] [17] ;
unsigned int arr_3 [17] ;
unsigned short arr_4 [17] [17] ;
short arr_5 [17] ;
unsigned long long int arr_6 [17] ;
unsigned int arr_7 [17] [17] ;
unsigned long long int arr_9 [17] [17] [17] ;
long long int arr_10 [17] [17] [17] ;
short arr_13 [17] [17] [17] [17] [17] [17] ;
short arr_15 [17] [17] [17] [17] [17] [17] [17] ;
unsigned long long int arr_16 [21] [21] ;
unsigned int arr_17 [21] ;
unsigned int arr_18 [21] ;
unsigned char arr_22 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 10500175995974662783ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)-64 : (signed char)100;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 857963599704032128ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 1444296922U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)19892;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (short)-13787;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 10573862474080959251ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? 2603654623U : 1962020231U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 14011573590601969445ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -408860967911450521LL : 5786033758628763316LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (short)-10035 : (short)-27083;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 17; ++i_6) 
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_3 % 2 == 0) ? (short)-6134 : (short)2755;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_16 [i_0] [i_1] = 4888610694168648005ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_17 [i_0] = 3699674745U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_18 [i_0] = 742847009U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_22 [i_0] [i_1] = (unsigned char)239;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
