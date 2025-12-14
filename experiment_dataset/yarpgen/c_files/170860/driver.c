#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27439;
int var_2 = -1049352324;
int var_4 = -291511911;
unsigned short var_5 = (unsigned short)63629;
unsigned long long int var_6 = 9229963439475422473ULL;
long long int var_9 = 5946803244437235847LL;
unsigned long long int var_10 = 9589321660509667375ULL;
unsigned short var_13 = (unsigned short)22456;
signed char var_14 = (signed char)-27;
int var_16 = 1920438155;
int zero = 0;
unsigned long long int var_17 = 1764194717748391321ULL;
unsigned long long int var_18 = 17837990517262737927ULL;
int var_19 = -88415484;
unsigned long long int arr_2 [22] ;
unsigned long long int arr_3 [22] ;
long long int arr_6 [22] [22] [22] ;
signed char arr_7 [22] [22] ;
int arr_8 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 12206068287897171121ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 10852933627375374809ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -2314893650108089101LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-62;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = -885205591;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
