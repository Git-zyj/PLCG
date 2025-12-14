#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)22;
unsigned int var_9 = 4249602681U;
int zero = 0;
unsigned int var_14 = 2684655290U;
unsigned char var_15 = (unsigned char)216;
short var_16 = (short)25876;
int var_17 = -159331404;
int var_18 = -1876481804;
long long int var_19 = 4552245009621103008LL;
unsigned char var_20 = (unsigned char)217;
unsigned long long int var_21 = 5312987418150469336ULL;
unsigned char var_22 = (unsigned char)127;
signed char var_23 = (signed char)-116;
unsigned char var_24 = (unsigned char)188;
int var_25 = -1005757230;
unsigned int var_26 = 2585202943U;
unsigned char arr_1 [11] ;
short arr_6 [19] ;
signed char arr_7 [19] ;
_Bool arr_8 [19] ;
short arr_9 [19] [19] ;
int arr_10 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)132 : (unsigned char)188;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (short)-29059;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (signed char)-14;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = (short)-25104;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = -1159447170;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
