#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1347795311;
unsigned char var_4 = (unsigned char)191;
unsigned long long int var_5 = 4978507922928069264ULL;
signed char var_8 = (signed char)12;
unsigned long long int var_12 = 1113229063420913934ULL;
unsigned char var_15 = (unsigned char)75;
int zero = 0;
unsigned long long int var_17 = 8505328936977964290ULL;
unsigned char var_18 = (unsigned char)205;
signed char var_19 = (signed char)-63;
unsigned long long int arr_1 [24] ;
unsigned int arr_3 [24] ;
short arr_6 [24] ;
unsigned long long int arr_7 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 9737674448744840760ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 4186990051U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (short)-17559;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 15823208878119702855ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
