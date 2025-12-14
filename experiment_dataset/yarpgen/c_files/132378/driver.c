#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39109;
unsigned char var_1 = (unsigned char)78;
unsigned short var_2 = (unsigned short)51417;
unsigned char var_4 = (unsigned char)77;
unsigned char var_5 = (unsigned char)83;
unsigned char var_6 = (unsigned char)208;
_Bool var_10 = (_Bool)1;
_Bool var_12 = (_Bool)1;
int var_13 = -384944338;
int zero = 0;
unsigned char var_15 = (unsigned char)192;
signed char var_16 = (signed char)117;
unsigned char var_17 = (unsigned char)82;
signed char arr_0 [22] ;
unsigned char arr_2 [22] ;
unsigned short arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)-65;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)243 : (unsigned char)177;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)20201 : (unsigned short)14665;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
