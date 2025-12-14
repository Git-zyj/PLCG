#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-9708;
short var_2 = (short)-4788;
unsigned long long int var_8 = 17437571455681597806ULL;
unsigned long long int var_9 = 8819208928148348902ULL;
long long int var_12 = 8083365124318061892LL;
unsigned long long int var_13 = 17889242969550511278ULL;
short var_15 = (short)24875;
int zero = 0;
unsigned long long int var_18 = 7352013217523341631ULL;
unsigned long long int var_19 = 14817191823178590649ULL;
short var_20 = (short)-30529;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)89;
short var_23 = (short)17151;
unsigned long long int var_24 = 292861634201462169ULL;
_Bool var_25 = (_Bool)1;
signed char var_26 = (signed char)123;
unsigned long long int var_27 = 8293830011366444373ULL;
unsigned char var_28 = (unsigned char)164;
signed char arr_3 [24] ;
unsigned long long int arr_4 [24] [24] ;
unsigned long long int arr_5 [24] [24] ;
long long int arr_14 [24] ;
short arr_20 [24] [24] [24] [24] ;
signed char arr_23 [24] [24] [24] [24] [24] ;
unsigned long long int arr_6 [24] ;
unsigned long long int arr_10 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (signed char)-26;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = 1415389363333151390ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = 16382069897011824447ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_14 [i_0] = -3977086470547681876LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (short)8787;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-125;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 17829285163859064185ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 3898990322192293891ULL : 11814733784210761190ULL;
}

void checksum() {
    hash(&seed, var_18);
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
