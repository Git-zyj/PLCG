#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)83;
unsigned short var_6 = (unsigned short)23037;
int var_9 = 371849089;
signed char var_11 = (signed char)-105;
unsigned int var_13 = 1803127584U;
unsigned int var_17 = 1695293136U;
int zero = 0;
unsigned short var_18 = (unsigned short)9357;
unsigned long long int var_19 = 730828233321055339ULL;
int var_20 = 25223468;
int var_21 = -1704303938;
signed char var_22 = (signed char)-116;
signed char var_23 = (signed char)-53;
unsigned long long int var_24 = 7080145874518040086ULL;
long long int var_25 = -4108852238925006719LL;
unsigned char var_26 = (unsigned char)33;
unsigned char var_27 = (unsigned char)72;
int var_28 = 30372537;
signed char var_29 = (signed char)110;
int var_30 = 931598120;
int var_31 = 389548025;
int var_32 = -166308835;
long long int var_33 = -4927198089875156617LL;
unsigned char var_34 = (unsigned char)45;
unsigned short var_35 = (unsigned short)23520;
unsigned char var_36 = (unsigned char)146;
unsigned long long int var_37 = 3656605973825612908ULL;
unsigned short var_38 = (unsigned short)16470;
_Bool var_39 = (_Bool)1;
signed char var_40 = (signed char)-93;
signed char var_41 = (signed char)-117;
short arr_0 [12] [12] ;
unsigned int arr_1 [12] [12] ;
long long int arr_2 [12] ;
unsigned long long int arr_3 [12] [12] [12] ;
signed char arr_4 [12] ;
signed char arr_7 [12] ;
unsigned long long int arr_9 [12] ;
unsigned long long int arr_11 [12] ;
unsigned long long int arr_12 [12] [12] [12] [12] ;
int arr_19 [12] ;
unsigned char arr_5 [12] ;
long long int arr_6 [12] [12] ;
short arr_26 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (short)24032;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 663365580U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = -4096844901838782525LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 4800897348508952945ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (signed char)-111;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (signed char)43;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = 3923732981909568970ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = 10367463152918083549ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 3549839873863456947ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_19 [i_0] = -56887700;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (unsigned char)16;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = -7008074600663765477LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_26 [i_0] = (short)17941;
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_26 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
