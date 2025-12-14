#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40625;
unsigned int var_1 = 2708323379U;
unsigned short var_3 = (unsigned short)56705;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)10;
signed char var_8 = (signed char)-73;
unsigned long long int var_10 = 5557599434062081140ULL;
unsigned char var_11 = (unsigned char)35;
unsigned char var_13 = (unsigned char)47;
int zero = 0;
unsigned long long int var_14 = 3142630986013791147ULL;
unsigned long long int var_15 = 17641374336961673590ULL;
unsigned long long int var_16 = 11315316177989561838ULL;
signed char var_17 = (signed char)-22;
unsigned char var_18 = (unsigned char)102;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)1126;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 4853590466468465898ULL;
unsigned short var_23 = (unsigned short)9392;
unsigned long long int var_24 = 15861961054713681152ULL;
unsigned long long int var_25 = 16877164571891576879ULL;
signed char var_26 = (signed char)-12;
unsigned long long int arr_0 [19] [19] ;
_Bool arr_1 [19] ;
unsigned char arr_5 [19] ;
unsigned long long int arr_6 [19] [19] ;
unsigned char arr_10 [19] ;
unsigned char arr_14 [19] [19] [19] [19] [19] ;
unsigned char arr_15 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 11758357118636259258ULL : 8469256509301892757ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)144 : (unsigned char)236;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = 14468097518764634660ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (unsigned char)64;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)246;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)128 : (unsigned char)85;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
