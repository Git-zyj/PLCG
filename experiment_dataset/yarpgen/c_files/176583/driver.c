#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)228;
int var_1 = -4416947;
signed char var_2 = (signed char)100;
int var_3 = -264117233;
unsigned long long int var_8 = 8044608352601639342ULL;
_Bool var_12 = (_Bool)1;
unsigned int var_18 = 250773038U;
int zero = 0;
unsigned short var_19 = (unsigned short)10788;
unsigned long long int var_20 = 7778266228003269462ULL;
short var_21 = (short)-28403;
signed char var_22 = (signed char)2;
unsigned short var_23 = (unsigned short)52307;
unsigned char var_24 = (unsigned char)220;
short var_25 = (short)-15690;
int var_26 = -736456080;
short var_27 = (short)-26375;
long long int var_28 = 6099247664441826066LL;
unsigned char var_29 = (unsigned char)241;
_Bool var_30 = (_Bool)0;
int var_31 = -1865548780;
unsigned long long int var_32 = 2157318092365309527ULL;
unsigned long long int var_33 = 9116564629436387862ULL;
_Bool var_34 = (_Bool)1;
int var_35 = -1004413289;
int var_36 = 1239017866;
signed char var_37 = (signed char)-100;
int var_38 = 1135221285;
int arr_3 [25] [25] [25] ;
unsigned short arr_4 [25] [25] [25] ;
unsigned int arr_5 [25] [25] ;
unsigned short arr_7 [20] [20] ;
_Bool arr_8 [20] ;
short arr_10 [20] ;
unsigned short arr_2 [25] ;
signed char arr_6 [25] ;
unsigned char arr_15 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1544229930;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)49874;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = 3631213476U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)53074;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (short)-1610;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned short)44164;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (signed char)-46;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = (unsigned char)172;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
