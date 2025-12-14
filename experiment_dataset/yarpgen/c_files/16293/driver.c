#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1375400797;
unsigned char var_4 = (unsigned char)175;
unsigned char var_5 = (unsigned char)145;
int var_6 = -1285751692;
short var_9 = (short)7114;
unsigned short var_12 = (unsigned short)64728;
unsigned short var_14 = (unsigned short)27884;
unsigned int var_17 = 2614619635U;
unsigned short var_18 = (unsigned short)10901;
int zero = 0;
unsigned char var_20 = (unsigned char)149;
signed char var_21 = (signed char)52;
short var_22 = (short)9199;
long long int var_23 = -2738357693343587932LL;
unsigned char var_24 = (unsigned char)131;
int var_25 = -1706601147;
long long int var_26 = 1807664937183712036LL;
long long int arr_0 [12] ;
unsigned long long int arr_1 [12] ;
short arr_5 [12] ;
_Bool arr_6 [12] [12] ;
int arr_7 [16] ;
unsigned char arr_8 [16] ;
unsigned short arr_9 [16] ;
unsigned short arr_2 [12] [12] ;
unsigned int arr_3 [12] ;
_Bool arr_4 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 4574578329298523889LL : 8968251265770014535LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 16900708508324075051ULL : 1011017034226525913ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (short)-14519;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = -1548471766;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (unsigned char)61;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (unsigned short)19929;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)54161 : (unsigned short)64075;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 304673904U : 3581695308U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
