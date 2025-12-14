#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -506808166;
signed char var_3 = (signed char)23;
unsigned char var_5 = (unsigned char)118;
unsigned char var_6 = (unsigned char)31;
signed char var_8 = (signed char)-46;
short var_9 = (short)22105;
int var_10 = 1810892423;
long long int var_11 = -5439979404420706582LL;
int zero = 0;
signed char var_12 = (signed char)26;
unsigned char var_13 = (unsigned char)226;
short var_14 = (short)27880;
unsigned char var_15 = (unsigned char)220;
unsigned char var_16 = (unsigned char)241;
unsigned char var_17 = (unsigned char)52;
unsigned long long int var_18 = 10507548667554212410ULL;
unsigned char var_19 = (unsigned char)239;
long long int var_20 = 8553603507958821970LL;
long long int var_21 = 7633330074665910646LL;
unsigned char arr_0 [19] [19] ;
short arr_1 [19] ;
unsigned int arr_6 [18] ;
signed char arr_12 [24] [24] ;
unsigned long long int arr_13 [24] ;
signed char arr_15 [17] ;
long long int arr_2 [19] ;
unsigned char arr_3 [19] [19] ;
signed char arr_4 [19] ;
unsigned long long int arr_14 [24] [24] ;
unsigned char arr_19 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)50;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (short)-30387;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 3867486488U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)-94;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = 1436183536813212122ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = (signed char)-36;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 4206625109508011755LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (signed char)57;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_14 [i_0] [i_1] = 15427664364129585172ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_19 [i_0] = (unsigned char)125;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
