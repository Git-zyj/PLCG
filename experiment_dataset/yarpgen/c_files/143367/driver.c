#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)25223;
unsigned short var_7 = (unsigned short)1344;
int var_8 = -1818296260;
short var_9 = (short)20407;
unsigned long long int var_12 = 16860290319455895873ULL;
int zero = 0;
unsigned long long int var_15 = 1023772681868163861ULL;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)30018;
unsigned short var_18 = (unsigned short)25728;
unsigned char var_19 = (unsigned char)204;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 11478355079521077318ULL;
unsigned long long int arr_2 [19] [19] [19] ;
unsigned long long int arr_3 [19] [19] [19] ;
unsigned short arr_7 [22] [22] ;
unsigned long long int arr_9 [22] [22] [22] [22] ;
unsigned long long int arr_10 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 16524981372878020728ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 12261602232860011561ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)65204 : (unsigned short)54151;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 18357693097688388121ULL : 11285067640648046247ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = 8706581580215648287ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
