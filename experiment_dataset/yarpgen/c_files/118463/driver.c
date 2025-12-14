#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)236;
unsigned long long int var_1 = 3741123773908240250ULL;
unsigned short var_2 = (unsigned short)10948;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)81;
unsigned short var_8 = (unsigned short)30742;
short var_9 = (short)-23752;
unsigned short var_11 = (unsigned short)49060;
int zero = 0;
short var_12 = (short)-21600;
unsigned int var_13 = 204836349U;
unsigned short arr_4 [17] ;
int arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (unsigned short)54087;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 1437232165 : -604198821;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
