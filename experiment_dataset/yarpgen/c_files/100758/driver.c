#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6842736633864830214LL;
long long int var_1 = -2206220321385128367LL;
_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)4;
_Bool var_7 = (_Bool)1;
signed char var_11 = (signed char)4;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)67;
int var_14 = -980844258;
int zero = 0;
int var_15 = -808384794;
int var_16 = -926328034;
long long int var_17 = 1390958640318735521LL;
long long int var_18 = 6130590249246691059LL;
signed char var_19 = (signed char)127;
signed char var_20 = (signed char)-90;
long long int var_21 = 3683868431403491551LL;
long long int var_22 = -4126666093375763121LL;
int var_23 = 981444626;
int var_24 = -205656269;
int var_25 = 1093380471;
signed char var_26 = (signed char)56;
short var_27 = (short)5585;
long long int var_28 = -6751966632757690438LL;
signed char arr_0 [21] ;
long long int arr_1 [21] ;
short arr_3 [21] [21] [21] ;
signed char arr_4 [21] [21] ;
short arr_7 [21] [21] [21] [21] ;
int arr_9 [21] [21] [21] [21] [21] [21] ;
long long int arr_13 [21] [21] ;
signed char arr_14 [21] [21] [21] ;
int arr_18 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)-105;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -3190488884633318277LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-25467 : (short)-2918;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-59;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)24382 : (short)3319;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? -444176390 : -1062009051;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? 3049312002170614085LL : -7825451633120864437LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)102 : (signed char)27;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? 214602940 : -885059995;
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
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
