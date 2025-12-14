#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)122;
unsigned int var_1 = 827315375U;
unsigned short var_2 = (unsigned short)37677;
int var_4 = -1166910854;
unsigned long long int var_6 = 4326364202593859879ULL;
long long int var_7 = -2510667333248551812LL;
signed char var_8 = (signed char)50;
short var_9 = (short)-4166;
int zero = 0;
signed char var_10 = (signed char)82;
signed char var_11 = (signed char)-52;
short var_12 = (short)9928;
unsigned char var_13 = (unsigned char)162;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)71;
long long int var_16 = -7813607019966237101LL;
unsigned short var_17 = (unsigned short)10506;
short var_18 = (short)12324;
unsigned char var_19 = (unsigned char)78;
long long int var_20 = -1799375578587670007LL;
unsigned char arr_0 [24] ;
unsigned char arr_1 [24] [24] ;
signed char arr_2 [23] ;
unsigned long long int arr_3 [23] [23] ;
signed char arr_4 [21] ;
unsigned char arr_7 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)11;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)200;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (signed char)-120;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 13049703633220352371ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (signed char)-77;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)70 : (unsigned char)190;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
