#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)47371;
unsigned short var_4 = (unsigned short)5823;
signed char var_7 = (signed char)-57;
unsigned int var_10 = 1298011788U;
int zero = 0;
unsigned char var_12 = (unsigned char)61;
unsigned int var_13 = 2676646374U;
unsigned long long int var_14 = 374418824813709427ULL;
unsigned short arr_1 [12] ;
unsigned long long int arr_2 [12] ;
long long int arr_3 [12] ;
unsigned short arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)43148 : (unsigned short)543;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 222238594859209647ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 6290579809379341572LL : -7655431932245177904LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)19841 : (unsigned short)19989;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
