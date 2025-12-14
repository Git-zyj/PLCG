#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1928592752;
signed char var_2 = (signed char)-72;
int var_4 = -1688349567;
signed char var_5 = (signed char)-70;
unsigned char var_7 = (unsigned char)86;
int var_8 = -1775808250;
unsigned int var_11 = 2163401008U;
int zero = 0;
unsigned short var_12 = (unsigned short)35569;
unsigned int var_13 = 2305774936U;
signed char var_14 = (signed char)-116;
signed char var_15 = (signed char)-90;
unsigned int var_16 = 4291857050U;
short var_17 = (short)17691;
unsigned int arr_0 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 3277576042U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
