#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)116;
unsigned int var_3 = 1462828259U;
unsigned short var_8 = (unsigned short)46532;
unsigned char var_9 = (unsigned char)157;
int var_10 = 1142534809;
unsigned short var_13 = (unsigned short)11746;
long long int var_18 = 2106746363768654644LL;
int zero = 0;
long long int var_19 = -3511450546635815346LL;
signed char var_20 = (signed char)74;
signed char var_21 = (signed char)35;
int var_22 = -836535548;
long long int var_23 = -4958511058386546634LL;
unsigned int var_24 = 1788182545U;
short arr_0 [13] [13] ;
unsigned long long int arr_3 [13] [13] ;
unsigned int arr_6 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (short)22361;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = 6698138628789730069ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 3923771142U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
