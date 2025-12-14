#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 6030251U;
signed char var_1 = (signed char)126;
unsigned short var_4 = (unsigned short)29931;
unsigned long long int var_5 = 11944564364927411451ULL;
unsigned int var_8 = 1437459884U;
unsigned char var_9 = (unsigned char)176;
int var_12 = -563113995;
int var_15 = 378779449;
int zero = 0;
signed char var_17 = (signed char)-5;
signed char var_18 = (signed char)5;
unsigned int var_19 = 487041382U;
unsigned long long int var_20 = 1388631427701093851ULL;
unsigned char var_21 = (unsigned char)145;
unsigned long long int var_22 = 12542784337909987724ULL;
int arr_0 [22] ;
_Bool arr_2 [22] [22] ;
unsigned char arr_3 [22] [22] ;
unsigned long long int arr_4 [22] [22] ;
int arr_5 [22] ;
int arr_6 [22] [22] [22] [22] ;
unsigned int arr_7 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = -1927072451;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = 558362687931608859ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = -213308313;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = -183846488;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 1458452182U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
