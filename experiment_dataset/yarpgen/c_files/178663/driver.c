#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4556051984422556650ULL;
signed char var_1 = (signed char)-12;
unsigned short var_3 = (unsigned short)52389;
int var_4 = -1425411705;
int var_5 = -1220594296;
unsigned long long int var_6 = 8143472095890233171ULL;
long long int var_7 = 2896313145779289426LL;
unsigned short var_8 = (unsigned short)13901;
unsigned short var_10 = (unsigned short)3761;
int var_11 = -1063020651;
int zero = 0;
unsigned char var_12 = (unsigned char)172;
long long int var_13 = -165990871201234584LL;
long long int var_14 = 1589505398177278785LL;
long long int var_15 = -8868376460369459579LL;
int var_16 = 2446174;
long long int var_17 = -5365230049901297272LL;
unsigned char arr_1 [17] [17] ;
unsigned int arr_2 [17] ;
signed char arr_3 [17] [17] ;
signed char arr_4 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)76;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 2597947726U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-41;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)101;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
