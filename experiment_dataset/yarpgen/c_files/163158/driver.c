#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1603302342U;
signed char var_2 = (signed char)117;
int var_6 = -301273910;
int var_8 = -1962901153;
unsigned long long int var_10 = 3088787979064953280ULL;
long long int var_11 = 3942026373176712285LL;
int var_13 = -1297929140;
int zero = 0;
short var_19 = (short)-10216;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 15818124248954561890ULL;
signed char var_22 = (signed char)-43;
short var_23 = (short)-31852;
unsigned int var_24 = 2251827052U;
unsigned short var_25 = (unsigned short)17547;
unsigned short var_26 = (unsigned short)4569;
int var_27 = 2142892812;
short arr_1 [23] ;
long long int arr_2 [23] ;
int arr_4 [23] [23] ;
short arr_5 [23] ;
unsigned char arr_8 [23] ;
short arr_10 [23] ;
int arr_3 [23] ;
int arr_6 [23] ;
unsigned long long int arr_7 [23] ;
unsigned long long int arr_11 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (short)-26046;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = -2658276005980909258LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 382701245;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (short)7173;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)10 : (unsigned char)89;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (short)-11882 : (short)-9346;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = -951500573;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = -496211703;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 1375348640770226073ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 8311867382379029608ULL : 8415500997227275082ULL;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
