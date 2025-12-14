#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)113;
long long int var_1 = -8428129365647503403LL;
unsigned char var_2 = (unsigned char)15;
unsigned long long int var_7 = 15683966958059884464ULL;
unsigned int var_8 = 2272376414U;
unsigned long long int var_9 = 8488652014875260528ULL;
short var_10 = (short)-1971;
int zero = 0;
short var_11 = (short)10170;
short var_12 = (short)12052;
unsigned int var_13 = 2574082132U;
signed char var_14 = (signed char)6;
unsigned short var_15 = (unsigned short)8498;
unsigned long long int var_16 = 15664724739234155713ULL;
unsigned long long int var_17 = 6436691998399447207ULL;
unsigned short arr_0 [16] [16] ;
unsigned int arr_5 [22] ;
unsigned char arr_6 [22] ;
unsigned long long int arr_8 [22] [22] ;
short arr_9 [22] [22] ;
unsigned long long int arr_10 [22] [22] ;
int arr_13 [22] [22] [22] [22] ;
unsigned long long int arr_4 [16] ;
signed char arr_7 [22] ;
unsigned long long int arr_15 [22] ;
unsigned int arr_16 [22] [22] [22] [22] ;
signed char arr_17 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)61097;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 415414697U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = 3886613694053469541ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = (short)25864;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_10 [i_0] [i_1] = 9145285800540571970ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = -459816177;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 18234150205798363539ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (signed char)101;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = 2829286560374225731ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = 3824160532U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_17 [i_0] = (signed char)-21;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
