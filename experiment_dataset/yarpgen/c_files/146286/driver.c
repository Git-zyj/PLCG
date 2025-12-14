#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-116;
unsigned long long int var_3 = 9302068729575383267ULL;
_Bool var_4 = (_Bool)0;
long long int var_5 = 7222817908816706783LL;
short var_7 = (short)-12959;
short var_8 = (short)-27407;
long long int var_9 = 112085297038119888LL;
int zero = 0;
int var_11 = 397925506;
int var_12 = 1883898337;
unsigned short var_13 = (unsigned short)42186;
long long int var_14 = -2385031700701298415LL;
unsigned long long int var_15 = 291691334875983421ULL;
unsigned char arr_1 [17] ;
signed char arr_3 [14] ;
long long int arr_4 [14] [14] ;
_Bool arr_6 [14] ;
signed char arr_2 [17] ;
int arr_5 [14] ;
long long int arr_11 [14] ;
long long int arr_12 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned char)73;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (signed char)81;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = 5648301794154909601LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (signed char)-125;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = -761903831;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = 8310650230870447242LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = 2853789578260521247LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
