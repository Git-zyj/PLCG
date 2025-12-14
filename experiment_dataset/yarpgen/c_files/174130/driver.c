#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)195;
unsigned char var_1 = (unsigned char)152;
unsigned char var_2 = (unsigned char)224;
signed char var_4 = (signed char)-62;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 356839246U;
int var_8 = 1884540785;
long long int var_11 = -8556445898793947945LL;
int zero = 0;
signed char var_14 = (signed char)-124;
long long int var_15 = 54288314986085334LL;
unsigned long long int var_16 = 8926530647165157045ULL;
unsigned long long int var_17 = 9037317559523146469ULL;
unsigned int var_18 = 3207077741U;
unsigned int var_19 = 2563011384U;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)151;
unsigned long long int var_22 = 567188413554483414ULL;
signed char var_23 = (signed char)38;
short var_24 = (short)11893;
long long int arr_2 [10] [10] ;
unsigned long long int arr_3 [10] ;
unsigned char arr_12 [10] [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = -1076005850095291025LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 1119743678785649669ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)231;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
