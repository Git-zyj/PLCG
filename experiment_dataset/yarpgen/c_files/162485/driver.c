#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 9149386687985894724LL;
unsigned long long int var_3 = 12194308355149659372ULL;
_Bool var_4 = (_Bool)0;
int var_5 = 1417773301;
unsigned char var_7 = (unsigned char)230;
unsigned short var_8 = (unsigned short)22919;
long long int var_9 = -3016769410545937072LL;
long long int var_10 = 6010088713581402159LL;
unsigned char var_11 = (unsigned char)39;
unsigned long long int var_12 = 11514983395561255161ULL;
short var_14 = (short)28533;
unsigned short var_15 = (unsigned short)36400;
long long int var_16 = 5027980643072638408LL;
int zero = 0;
unsigned int var_17 = 3351601524U;
unsigned int var_18 = 1981318609U;
unsigned int var_19 = 2775530741U;
unsigned int var_20 = 3273566861U;
unsigned char arr_0 [20] ;
int arr_1 [20] [20] ;
unsigned int arr_5 [10] ;
unsigned char arr_6 [10] ;
signed char arr_2 [20] ;
long long int arr_3 [20] ;
unsigned int arr_4 [20] [20] ;
unsigned int arr_7 [10] ;
long long int arr_8 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)157;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = -1023200161;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = 1923189837U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (unsigned char)186;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (signed char)-120;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = -5469242333066108543LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = 2666541675U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = 3223098773U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = -6787404104676540421LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
