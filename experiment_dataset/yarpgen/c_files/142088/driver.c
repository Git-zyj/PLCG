#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10038164515832303255ULL;
unsigned int var_1 = 3156074420U;
signed char var_2 = (signed char)23;
unsigned int var_4 = 1555441738U;
unsigned short var_5 = (unsigned short)31708;
unsigned short var_6 = (unsigned short)25494;
unsigned long long int var_8 = 10495825965164059523ULL;
short var_11 = (short)-8643;
long long int var_12 = -2545196791048402721LL;
unsigned char var_13 = (unsigned char)14;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)9105;
int var_16 = 1369626523;
long long int var_17 = -2491567566195498750LL;
long long int var_18 = -482995737879981060LL;
unsigned int arr_2 [21] ;
unsigned char arr_4 [21] [21] [21] ;
unsigned long long int arr_5 [21] [21] ;
unsigned int arr_7 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 3427607478U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)213;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 11228958707343582470ULL : 13575242379428670718ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 1700100260U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
