#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -537957472;
_Bool var_1 = (_Bool)0;
unsigned short var_4 = (unsigned short)50521;
int var_5 = -1706926540;
long long int var_7 = -7438135558433639556LL;
unsigned long long int var_8 = 3231726087859150832ULL;
int var_9 = 1893609059;
int var_11 = -469656951;
int zero = 0;
unsigned long long int var_12 = 9057517801809274875ULL;
unsigned long long int var_13 = 13540343605148692774ULL;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 1994827416024822409ULL;
int var_16 = -139596525;
unsigned short var_17 = (unsigned short)22836;
unsigned long long int var_18 = 9281616565427294032ULL;
unsigned long long int var_19 = 11090403908649506494ULL;
int var_20 = -1710011202;
unsigned long long int var_21 = 11412321789970637390ULL;
int arr_0 [22] ;
unsigned long long int arr_1 [22] ;
unsigned long long int arr_3 [17] ;
int arr_4 [17] ;
signed char arr_9 [17] [17] ;
unsigned long long int arr_10 [17] [17] [17] ;
signed char arr_2 [22] [22] ;
unsigned long long int arr_5 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 1143618149;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 1982806035555039095ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 1200173700773587553ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = -1476684473;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)22;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 4554781403388675531ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)95;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = 12921261537821685602ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
