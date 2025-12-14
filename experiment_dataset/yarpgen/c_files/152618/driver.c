#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1037897911;
unsigned char var_1 = (unsigned char)23;
unsigned int var_8 = 1810607885U;
unsigned long long int var_9 = 17241421011950535989ULL;
unsigned long long int var_11 = 15291952118134462746ULL;
unsigned char var_12 = (unsigned char)184;
signed char var_14 = (signed char)-25;
int zero = 0;
signed char var_17 = (signed char)12;
unsigned char var_18 = (unsigned char)231;
unsigned long long int var_19 = 15658246974455039088ULL;
short var_20 = (short)-20338;
unsigned int arr_0 [13] ;
unsigned long long int arr_3 [13] ;
unsigned char arr_4 [13] [13] ;
unsigned char arr_6 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 3175928995U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 8174328139846279975ULL : 2829656819939126768ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)137;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)81 : (unsigned char)153;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
