#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3835533304U;
unsigned char var_4 = (unsigned char)175;
unsigned long long int var_7 = 9047961564278008310ULL;
unsigned short var_10 = (unsigned short)48406;
unsigned long long int var_11 = 2546723830421368114ULL;
int zero = 0;
long long int var_12 = -2570741652489952111LL;
unsigned long long int var_13 = 9607198439611280888ULL;
long long int var_14 = -2060000986616151517LL;
int arr_0 [15] ;
unsigned char arr_2 [15] ;
_Bool arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 491954498;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned char)89;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
