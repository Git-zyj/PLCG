#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5145351315095479287ULL;
unsigned long long int var_1 = 9596556116139436006ULL;
unsigned short var_2 = (unsigned short)14135;
signed char var_3 = (signed char)45;
unsigned long long int var_4 = 17007334580184080137ULL;
signed char var_5 = (signed char)89;
long long int var_6 = -1266460361424054728LL;
unsigned int var_7 = 2102829360U;
unsigned char var_8 = (unsigned char)74;
long long int var_9 = 7804789552703420814LL;
unsigned long long int var_10 = 10685188942621114277ULL;
int zero = 0;
signed char var_11 = (signed char)7;
unsigned long long int var_12 = 16041267409647418937ULL;
unsigned int var_13 = 4093166643U;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 3187796087U;
unsigned short var_16 = (unsigned short)8992;
unsigned char var_17 = (unsigned char)250;
unsigned long long int var_18 = 6393999875048279708ULL;
signed char var_19 = (signed char)125;
_Bool var_20 = (_Bool)1;
short var_21 = (short)6877;
unsigned char var_22 = (unsigned char)112;
unsigned short var_23 = (unsigned short)46212;
_Bool arr_0 [13] ;
unsigned short arr_1 [13] ;
unsigned short arr_2 [13] ;
unsigned int arr_6 [13] [13] [13] ;
unsigned int arr_10 [24] ;
unsigned short arr_11 [24] ;
short arr_12 [24] [24] [24] ;
short arr_13 [24] [24] ;
_Bool arr_14 [24] ;
unsigned char arr_17 [24] ;
unsigned long long int arr_7 [13] [13] [13] ;
short arr_8 [13] [13] [13] [13] ;
signed char arr_9 [13] ;
unsigned short arr_15 [24] ;
unsigned short arr_18 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned short)39059;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned short)63061;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 693070106U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 3823966839U : 1220755317U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (unsigned short)46749;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (short)16415;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_13 [i_0] [i_1] = (short)9546;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (unsigned char)21 : (unsigned char)143;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 9460612996706115163ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (short)25704;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (signed char)-69;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (unsigned short)60771 : (unsigned short)36619;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_18 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)30267 : (unsigned short)61373;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
