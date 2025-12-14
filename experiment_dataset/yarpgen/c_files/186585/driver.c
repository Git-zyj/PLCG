#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1763720563634238066LL;
unsigned long long int var_1 = 6139306030471029639ULL;
int var_2 = 53762938;
_Bool var_5 = (_Bool)1;
long long int var_7 = 7993440893937236157LL;
short var_9 = (short)-27326;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_16 = -3517565089831130485LL;
signed char var_17 = (signed char)-80;
unsigned int var_18 = 169641584U;
signed char var_19 = (signed char)73;
unsigned short var_20 = (unsigned short)32679;
long long int var_21 = -3037524123454083438LL;
unsigned int var_22 = 2666046613U;
long long int var_23 = 8012650548626828376LL;
long long int var_24 = -7775262319692251943LL;
int arr_1 [22] ;
unsigned char arr_6 [22] [22] ;
long long int arr_16 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 25155989;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)35;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = -3421365166529385838LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
