#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14002518637363198977ULL;
long long int var_3 = 213411234948236310LL;
short var_5 = (short)-2410;
unsigned short var_6 = (unsigned short)40624;
unsigned char var_7 = (unsigned char)52;
unsigned short var_8 = (unsigned short)64498;
int var_11 = -247396463;
int zero = 0;
short var_14 = (short)5209;
unsigned short var_15 = (unsigned short)42361;
int var_16 = -1396952032;
unsigned char var_17 = (unsigned char)167;
unsigned char var_18 = (unsigned char)17;
unsigned long long int var_19 = 1376868260150249013ULL;
long long int arr_0 [13] [13] ;
unsigned int arr_1 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = -695056972075770558LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 3545491415U;
}

void checksum() {
    hash(&seed, var_14);
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
