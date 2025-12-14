#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2226450770U;
unsigned short var_1 = (unsigned short)5050;
unsigned char var_2 = (unsigned char)111;
unsigned char var_3 = (unsigned char)160;
unsigned short var_4 = (unsigned short)48290;
int var_5 = -1962325419;
int var_6 = -1011573557;
signed char var_7 = (signed char)105;
long long int var_8 = -8998948140716906968LL;
long long int var_9 = -7491729604696473285LL;
signed char var_10 = (signed char)82;
unsigned int var_11 = 99396959U;
unsigned char var_13 = (unsigned char)248;
int zero = 0;
int var_15 = -690704692;
unsigned long long int var_16 = 8913293396889999342ULL;
unsigned int var_17 = 3418869916U;
long long int var_18 = 8914092484213670089LL;
long long int var_19 = -4808230175543161258LL;
short var_20 = (short)11206;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 5564920889834970717ULL;
signed char var_23 = (signed char)-90;
unsigned int var_24 = 2582364885U;
unsigned int var_25 = 1097259188U;
unsigned int var_26 = 2227572756U;
long long int var_27 = 3043240549028820268LL;
unsigned int var_28 = 821622095U;
unsigned int var_29 = 1104763002U;
int var_30 = 1771393594;
long long int arr_0 [17] [17] ;
signed char arr_1 [17] ;
int arr_2 [17] [17] ;
unsigned int arr_3 [17] [17] ;
unsigned char arr_4 [17] [17] [17] ;
unsigned long long int arr_5 [17] [17] [17] [17] ;
unsigned long long int arr_6 [17] [17] [17] [17] [17] ;
short arr_7 [17] [17] [17] ;
unsigned int arr_8 [17] [17] [17] [17] [17] ;
int arr_9 [17] ;
unsigned char arr_10 [17] ;
_Bool arr_11 [17] [17] [17] [17] ;
long long int arr_15 [17] [17] [17] [17] ;
unsigned int arr_17 [17] [17] [17] [17] ;
unsigned long long int arr_19 [17] [17] ;
signed char arr_20 [17] ;
short arr_13 [17] ;
int arr_14 [17] [17] [17] [17] [17] [17] ;
unsigned long long int arr_21 [17] [17] [17] [17] ;
long long int arr_22 [17] [17] [17] [17] [17] ;
unsigned long long int arr_23 [17] ;
unsigned int arr_24 [17] [17] [17] [17] ;
signed char arr_25 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 2352841101482759209LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)127;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 1962318258 : 1232719890;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = 270454714U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)241 : (unsigned char)128;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 4469190944421722229ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_6 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 6152091678627712181ULL : 10372941604007460574ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)11668;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 823066458U : 747012190U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = 1782027399;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned char)174 : (unsigned char)223;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 6917317085410974474LL : 8230514740960915863LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = 3351501471U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_19 [i_0] [i_1] = 836931755422267073ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_20 [i_0] = (signed char)-105;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (short)-27254 : (short)-15124;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? 1488027335 : 111644058;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 4664860489334276665ULL : 3323464598779331950ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? -5886519639697311058LL : 6150975959785735750LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? 1280925112359856010ULL : 1185144384277144133ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 642686000U : 1280697027U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? (signed char)-99 : (signed char)10;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
