#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2066539787;
signed char var_3 = (signed char)-105;
short var_4 = (short)7474;
short var_5 = (short)25879;
long long int var_8 = 3766433810782871555LL;
int var_9 = -1450731636;
_Bool var_11 = (_Bool)0;
int zero = 0;
long long int var_12 = 5744033744570913106LL;
int var_13 = -754159779;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 3543242223U;
int var_16 = 1981091490;
_Bool var_17 = (_Bool)1;
short var_18 = (short)18333;
unsigned short arr_0 [13] [13] ;
signed char arr_3 [13] [13] ;
signed char arr_4 [13] ;
unsigned short arr_5 [21] [21] ;
unsigned long long int arr_8 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)6579;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-69 : (signed char)6;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (signed char)-5;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)575;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = 306626392955913194ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
