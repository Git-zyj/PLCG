#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3742986532U;
unsigned char var_2 = (unsigned char)2;
int var_3 = -1384890530;
int var_5 = 1951896855;
unsigned char var_10 = (unsigned char)167;
unsigned char var_13 = (unsigned char)82;
unsigned char var_14 = (unsigned char)91;
signed char var_16 = (signed char)-54;
short var_18 = (short)2266;
int zero = 0;
signed char var_19 = (signed char)-72;
signed char var_20 = (signed char)-63;
long long int var_21 = -4690329891773221521LL;
unsigned char var_22 = (unsigned char)96;
short var_23 = (short)30258;
unsigned long long int var_24 = 8996980020341975418ULL;
short var_25 = (short)-9963;
unsigned long long int var_26 = 2759242679375416666ULL;
long long int var_27 = 1308430824443314091LL;
short var_28 = (short)-31435;
long long int arr_0 [18] ;
unsigned short arr_4 [18] [18] [18] [18] ;
short arr_8 [14] [14] ;
short arr_9 [14] ;
unsigned short arr_14 [18] ;
_Bool arr_6 [18] [18] [18] [18] ;
unsigned int arr_10 [14] ;
int arr_15 [18] ;
short arr_16 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 3560548068508632321LL : -3503330727524924414LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (unsigned short)4326;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = (short)-32539;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (short)22125;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = (unsigned short)32385;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = 1187303632U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 433977351 : 1791228942;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (short)9711 : (short)1853;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_6 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
