#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)181;
long long int var_5 = 5752870618242955517LL;
unsigned long long int var_6 = 18311029448457579324ULL;
unsigned long long int var_7 = 5467513782122441562ULL;
unsigned int var_8 = 235769350U;
int var_9 = 1676860626;
unsigned char var_10 = (unsigned char)61;
unsigned char var_11 = (unsigned char)46;
unsigned short var_13 = (unsigned short)7205;
long long int var_14 = 1747594171283538149LL;
long long int var_16 = 7333296568350946744LL;
unsigned short var_18 = (unsigned short)32991;
int zero = 0;
int var_20 = -680695528;
unsigned long long int var_21 = 16434487643498313070ULL;
signed char var_22 = (signed char)-87;
_Bool var_23 = (_Bool)0;
unsigned int arr_1 [19] ;
unsigned char arr_3 [19] [19] ;
short arr_4 [19] [19] ;
unsigned long long int arr_5 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 1375824943U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)197;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (short)7024;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = 14750842043629667336ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
