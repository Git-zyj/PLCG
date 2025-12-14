#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)126;
int var_4 = 717710034;
short var_5 = (short)26618;
unsigned short var_7 = (unsigned short)36112;
signed char var_8 = (signed char)79;
unsigned char var_10 = (unsigned char)167;
unsigned short var_17 = (unsigned short)46734;
short var_19 = (short)-5316;
int zero = 0;
unsigned short var_20 = (unsigned short)35582;
unsigned short var_21 = (unsigned short)52057;
unsigned short var_22 = (unsigned short)8622;
unsigned short var_23 = (unsigned short)10883;
unsigned short var_24 = (unsigned short)57006;
unsigned short var_25 = (unsigned short)55199;
unsigned short var_26 = (unsigned short)42040;
unsigned char var_27 = (unsigned char)218;
short var_28 = (short)-15753;
unsigned short arr_0 [22] ;
int arr_2 [22] [22] ;
int arr_4 [13] ;
_Bool arr_5 [14] ;
int arr_6 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned short)41570;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 1489197942;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 660132217 : -1586175782;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = -1247836313;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
