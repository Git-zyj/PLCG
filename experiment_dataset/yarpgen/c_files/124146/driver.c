#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)26550;
signed char var_2 = (signed char)30;
unsigned long long int var_5 = 16748699572478242969ULL;
unsigned int var_6 = 1803032107U;
signed char var_7 = (signed char)-4;
unsigned int var_8 = 2199698260U;
unsigned short var_9 = (unsigned short)9058;
unsigned short var_11 = (unsigned short)57310;
long long int var_12 = -6526724071033869227LL;
short var_13 = (short)-20819;
unsigned long long int var_14 = 5363476453457895988ULL;
int zero = 0;
long long int var_15 = -8099075623323177429LL;
signed char var_16 = (signed char)10;
int var_17 = -786611947;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)13573;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 10493846293879848122ULL;
unsigned long long int var_22 = 13922517739614568122ULL;
short var_23 = (short)-7679;
unsigned long long int var_24 = 1974751019614835822ULL;
short var_25 = (short)-3269;
unsigned int var_26 = 3541187467U;
int var_27 = -2042388225;
int var_28 = -951914671;
int var_29 = -797773565;
unsigned int var_30 = 3160429487U;
unsigned char var_31 = (unsigned char)45;
unsigned long long int arr_0 [14] ;
unsigned short arr_1 [14] [14] ;
unsigned char arr_2 [14] ;
unsigned long long int arr_3 [21] ;
unsigned char arr_7 [21] [21] [21] ;
unsigned char arr_14 [21] [21] [21] ;
unsigned long long int arr_16 [21] [21] [21] [21] [21] ;
short arr_18 [21] [21] [21] [21] [21] ;
unsigned char arr_19 [21] [21] [21] [21] [21] [21] [21] ;
unsigned char arr_22 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 10439699697886471137ULL : 18427100497289135602ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)43533 : (unsigned short)53449;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned char)141;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 12078197407092879240ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)252;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned char)154;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = 11835775740832887623ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (short)-11313 : (short)-2210;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 21; ++i_6) 
                                arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_2 % 2 == 0) ? (unsigned char)27 : (unsigned char)147;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_22 [i_0] = (unsigned char)23;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
