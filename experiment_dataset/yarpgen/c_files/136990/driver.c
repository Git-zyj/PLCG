#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -356474777;
unsigned char var_7 = (unsigned char)128;
int var_11 = -958145737;
unsigned char var_13 = (unsigned char)122;
int zero = 0;
unsigned char var_18 = (unsigned char)179;
unsigned short var_19 = (unsigned short)42424;
unsigned char var_20 = (unsigned char)230;
unsigned int var_21 = 2648750114U;
long long int var_22 = -1703312528972017088LL;
unsigned short arr_0 [18] [18] ;
unsigned int arr_1 [18] ;
signed char arr_2 [18] [18] [18] ;
unsigned int arr_3 [18] ;
long long int arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)27711;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 3786437196U : 3538386247U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)67 : (signed char)-121;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 2991885732U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -5798167568056103608LL : 4616287064900147751LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
