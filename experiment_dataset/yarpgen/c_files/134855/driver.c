#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = -602608500780832563LL;
int var_6 = -482796757;
unsigned long long int var_7 = 1886219799382149962ULL;
int var_8 = 1333238596;
unsigned short var_10 = (unsigned short)49938;
unsigned char var_15 = (unsigned char)64;
int zero = 0;
short var_17 = (short)21767;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
int var_20 = 2033652709;
signed char var_21 = (signed char)49;
int arr_0 [10] ;
unsigned char arr_1 [10] ;
signed char arr_4 [10] [10] ;
unsigned char arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 1390688440;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned char)180;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-36;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)27 : (unsigned char)7;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
