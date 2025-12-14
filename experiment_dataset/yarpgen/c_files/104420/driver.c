#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-101;
int var_1 = -14285719;
signed char var_3 = (signed char)-114;
int var_4 = -1176432724;
signed char var_5 = (signed char)-79;
int var_8 = 1249021088;
unsigned long long int var_9 = 9399794277191575615ULL;
short var_11 = (short)31102;
unsigned short var_12 = (unsigned short)46330;
int var_14 = -338775566;
int var_15 = -6471451;
signed char var_16 = (signed char)-69;
int var_17 = 969377157;
int zero = 0;
int var_19 = 1005017881;
unsigned short var_20 = (unsigned short)22671;
unsigned short var_21 = (unsigned short)2225;
unsigned short var_22 = (unsigned short)15110;
unsigned short var_23 = (unsigned short)12774;
int arr_0 [15] ;
int arr_1 [15] ;
signed char arr_3 [15] ;
unsigned char arr_5 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -2116248877 : -1373586764;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -1993422592 : 691568097;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (signed char)-61;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)146 : (unsigned char)52;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
