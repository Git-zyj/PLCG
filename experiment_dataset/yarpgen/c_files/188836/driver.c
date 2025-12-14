#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)208;
unsigned char var_1 = (unsigned char)159;
unsigned char var_2 = (unsigned char)130;
unsigned int var_3 = 2571644518U;
int var_4 = 1407227871;
unsigned long long int var_5 = 15138229541109786294ULL;
long long int var_6 = -4994422473119377270LL;
unsigned int var_10 = 3583963063U;
unsigned short var_12 = (unsigned short)15599;
short var_13 = (short)26992;
int zero = 0;
unsigned short var_14 = (unsigned short)64662;
unsigned char var_15 = (unsigned char)45;
unsigned int var_16 = 930468696U;
unsigned short var_17 = (unsigned short)33124;
unsigned int var_18 = 1023151482U;
unsigned long long int var_19 = 9399124990179007789ULL;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)172;
unsigned short var_22 = (unsigned short)28850;
unsigned long long int var_23 = 7973471791258084057ULL;
int var_24 = -1509277028;
unsigned long long int var_25 = 16991323384007536785ULL;
unsigned short var_26 = (unsigned short)9021;
unsigned int var_27 = 3604318888U;
unsigned char arr_0 [24] ;
int arr_1 [24] ;
int arr_2 [24] ;
unsigned long long int arr_3 [24] ;
int arr_6 [24] [24] [24] [24] ;
unsigned int arr_7 [18] ;
unsigned short arr_14 [18] [18] [18] ;
unsigned char arr_22 [20] [20] [20] ;
unsigned long long int arr_23 [20] [20] [20] ;
unsigned short arr_24 [20] [20] [20] ;
unsigned char arr_27 [15] [15] [15] ;
long long int arr_30 [15] ;
unsigned long long int arr_9 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)111;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 1975219188;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 2080366518;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 5628761709120446199ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = -1386283368;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = 1016996188U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned short)22039;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (unsigned char)246;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = 9066944717295035279ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (unsigned short)24496;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (unsigned char)187;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_30 [i_0] = -4927402520183236149LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = 5922362141617899116ULL;
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
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
