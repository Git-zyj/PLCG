#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-8586;
int var_3 = -2027846858;
short var_4 = (short)28590;
unsigned long long int var_5 = 9121858667349054572ULL;
short var_8 = (short)-15052;
unsigned long long int var_9 = 11563507279026464714ULL;
unsigned long long int var_10 = 4411874670277379296ULL;
short var_11 = (short)-20459;
unsigned long long int var_12 = 6217638835848996209ULL;
short var_13 = (short)-5586;
_Bool var_14 = (_Bool)1;
short var_15 = (short)5484;
unsigned long long int var_16 = 3777097127453050325ULL;
int zero = 0;
int var_17 = -1640098473;
unsigned short var_18 = (unsigned short)2753;
short var_19 = (short)-28435;
unsigned long long int var_20 = 6543757950304739834ULL;
unsigned char var_21 = (unsigned char)68;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)53;
unsigned long long int var_24 = 997016585729914304ULL;
short var_25 = (short)22858;
unsigned int arr_0 [25] [25] ;
long long int arr_1 [25] ;
short arr_2 [25] ;
unsigned long long int arr_16 [17] [17] ;
unsigned int arr_5 [25] [25] [25] ;
long long int arr_6 [25] [25] [25] ;
long long int arr_9 [10] ;
unsigned int arr_10 [10] ;
unsigned long long int arr_17 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 3441001035U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -1654725589014796949LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (short)9675;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? 2507542114600015881ULL : 2157354691370641512ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 3580466034U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -6543674387952098302LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = -4330713684212916072LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = 1753253192U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 3536691927424155712ULL : 16675723853032979196ULL;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
