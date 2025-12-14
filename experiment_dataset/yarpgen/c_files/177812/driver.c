#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2369838550U;
int var_2 = -1083179296;
unsigned short var_7 = (unsigned short)27162;
unsigned short var_10 = (unsigned short)56172;
short var_13 = (short)6163;
int var_15 = -883904826;
unsigned char var_17 = (unsigned char)196;
int zero = 0;
unsigned short var_20 = (unsigned short)19608;
unsigned short var_21 = (unsigned short)25328;
unsigned int var_22 = 2183824375U;
unsigned short var_23 = (unsigned short)57079;
unsigned char arr_0 [22] ;
int arr_1 [22] ;
short arr_2 [22] ;
short arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned char)183;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = -1627779626;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (short)12606;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (short)5607;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
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
