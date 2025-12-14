#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)19766;
unsigned char var_7 = (unsigned char)144;
unsigned int var_13 = 1792630978U;
short var_14 = (short)18625;
unsigned short var_15 = (unsigned short)43349;
int zero = 0;
unsigned short var_17 = (unsigned short)51180;
unsigned char var_18 = (unsigned char)32;
int var_19 = -913774214;
unsigned char var_20 = (unsigned char)178;
long long int arr_0 [13] [13] ;
int arr_1 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 5186811778639388884LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -1645621476;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
