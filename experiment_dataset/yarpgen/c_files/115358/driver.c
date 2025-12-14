#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12213790408396973909ULL;
signed char var_3 = (signed char)-5;
unsigned short var_4 = (unsigned short)14465;
signed char var_6 = (signed char)-73;
short var_7 = (short)29959;
int zero = 0;
unsigned char var_10 = (unsigned char)157;
signed char var_11 = (signed char)-47;
signed char var_12 = (signed char)17;
unsigned char var_13 = (unsigned char)167;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
unsigned short arr_0 [14] ;
int arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned short)46448;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 746389221;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
