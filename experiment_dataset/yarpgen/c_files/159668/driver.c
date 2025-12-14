#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)16;
unsigned int var_2 = 2565959789U;
unsigned int var_5 = 2426274416U;
unsigned int var_6 = 606643440U;
short var_7 = (short)24475;
unsigned long long int var_10 = 1819262447977276645ULL;
int var_12 = -350610143;
int var_13 = 1126421333;
int zero = 0;
long long int var_15 = -5577544829038746206LL;
unsigned int var_16 = 3291148907U;
signed char var_17 = (signed char)114;
unsigned short var_18 = (unsigned short)12791;
unsigned long long int var_19 = 16568907622991763609ULL;
unsigned char arr_1 [12] [12] ;
unsigned long long int arr_2 [12] [12] ;
unsigned int arr_6 [12] ;
unsigned char arr_7 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)153;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 8834442354728223952ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = 235817544U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)65;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
