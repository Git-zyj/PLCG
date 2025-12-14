#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3960841701U;
unsigned long long int var_2 = 14860853708297875458ULL;
short var_4 = (short)29107;
int var_5 = -542387956;
int var_6 = -1983085787;
unsigned short var_7 = (unsigned short)9656;
int var_9 = 1646579107;
unsigned short var_10 = (unsigned short)43385;
unsigned char var_11 = (unsigned char)196;
unsigned long long int var_12 = 6172982917656129241ULL;
unsigned int var_13 = 2536945920U;
int var_14 = -1671558947;
unsigned int var_15 = 1103375717U;
long long int var_16 = -1697392044900624758LL;
short var_17 = (short)30433;
int zero = 0;
long long int var_18 = 7486050045427437927LL;
unsigned int var_19 = 2837797645U;
unsigned int var_20 = 3069517855U;
unsigned short var_21 = (unsigned short)25685;
unsigned char var_22 = (unsigned char)82;
signed char var_23 = (signed char)-11;
long long int var_24 = 3600774776360107035LL;
signed char var_25 = (signed char)8;
long long int var_26 = 3502714215913678362LL;
unsigned int var_27 = 1515288260U;
signed char var_28 = (signed char)-93;
unsigned short var_29 = (unsigned short)59504;
unsigned long long int arr_0 [24] ;
unsigned long long int arr_1 [24] [24] ;
unsigned int arr_3 [24] [24] [24] ;
unsigned long long int arr_4 [24] ;
short arr_5 [24] ;
int arr_7 [24] [24] ;
int arr_8 [24] [24] [24] ;
unsigned long long int arr_9 [24] ;
short arr_10 [24] ;
unsigned long long int arr_12 [24] [24] [24] ;
unsigned long long int arr_2 [24] ;
int arr_6 [24] ;
unsigned short arr_11 [24] [24] ;
unsigned long long int arr_16 [11] ;
unsigned short arr_17 [11] [11] ;
unsigned int arr_26 [23] [23] ;
long long int arr_27 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 9579009487883301710ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 3368667100745279571ULL : 1713691718584726868ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 2643934449U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 16263501287414258100ULL : 7142578608500514945ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)-19688 : (short)3537;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = -1023830794;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -1565653611;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 7778855907963155362ULL : 1706634952216460218ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (short)-32521;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 6452893634315784244ULL : 5253854609497364831ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 6874858659791866441ULL : 4494442521751170643ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -1898586039 : -1138889435;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)60989 : (unsigned short)33039;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_16 [i_0] = 5574920107570137095ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned short)18051;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_26 [i_0] [i_1] = 913355948U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_27 [i_0] [i_1] = 5904598380079411037LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
