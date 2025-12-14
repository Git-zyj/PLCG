#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -898912142;
unsigned short var_2 = (unsigned short)21637;
unsigned int var_4 = 2632352799U;
unsigned char var_12 = (unsigned char)55;
int zero = 0;
unsigned int var_15 = 332634319U;
long long int var_16 = 3459252640255577452LL;
unsigned char var_17 = (unsigned char)52;
short var_18 = (short)-17793;
long long int var_19 = 8169097441030387551LL;
unsigned char var_20 = (unsigned char)139;
unsigned char arr_0 [13] ;
unsigned char arr_1 [13] ;
int arr_3 [13] [13] ;
unsigned long long int arr_9 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)187;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)248;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? -1271519610 : -1356334643;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 8407339559118443687ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
