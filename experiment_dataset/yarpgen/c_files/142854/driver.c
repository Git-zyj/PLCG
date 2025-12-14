#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34951;
unsigned char var_4 = (unsigned char)122;
unsigned long long int var_5 = 4879523879744807606ULL;
unsigned long long int var_7 = 7806233594910081861ULL;
unsigned short var_8 = (unsigned short)15157;
unsigned short var_10 = (unsigned short)36023;
int zero = 0;
unsigned long long int var_11 = 7732528867008950127ULL;
unsigned short var_12 = (unsigned short)38791;
unsigned long long int var_13 = 8139943164921991172ULL;
unsigned char var_14 = (unsigned char)118;
unsigned short var_15 = (unsigned short)22353;
signed char var_16 = (signed char)36;
signed char var_17 = (signed char)-6;
unsigned char var_18 = (unsigned char)29;
unsigned char arr_0 [12] ;
signed char arr_1 [12] ;
unsigned char arr_2 [12] ;
unsigned short arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned char)248;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)10;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned char)207;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)32525 : (unsigned short)15769;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
