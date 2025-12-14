#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)53685;
unsigned long long int var_4 = 817670691827855972ULL;
int var_7 = -751777514;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 5060449770176375323ULL;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 4235275887U;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-2579;
short var_17 = (short)26353;
unsigned int var_18 = 3127221584U;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)156;
short var_21 = (short)8158;
unsigned int var_22 = 811040506U;
unsigned char arr_1 [10] ;
int arr_6 [10] ;
unsigned int arr_7 [10] [10] [10] [10] [10] [10] ;
unsigned int arr_8 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned char)110;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = 738847510;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? 4093081339U : 42421593U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 178822650U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
