#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)63;
unsigned short var_5 = (unsigned short)43046;
signed char var_6 = (signed char)-31;
long long int var_7 = -4194231902248755898LL;
unsigned short var_9 = (unsigned short)14009;
unsigned short var_10 = (unsigned short)42700;
signed char var_11 = (signed char)-30;
long long int var_13 = 6496277094607283522LL;
unsigned short var_15 = (unsigned short)13249;
int zero = 0;
signed char var_16 = (signed char)-42;
short var_17 = (short)-17042;
long long int var_18 = 8659666828813489021LL;
signed char var_19 = (signed char)99;
unsigned long long int var_20 = 13929602197850021615ULL;
unsigned long long int var_21 = 12031716350888153560ULL;
short var_22 = (short)4101;
unsigned long long int var_23 = 17157241480385481053ULL;
unsigned short var_24 = (unsigned short)58837;
unsigned long long int var_25 = 12476596480646044232ULL;
long long int var_26 = 3677468864546933130LL;
signed char var_27 = (signed char)117;
short var_28 = (short)29997;
signed char var_29 = (signed char)-85;
short var_30 = (short)-3003;
short arr_1 [13] [13] ;
unsigned short arr_3 [13] [13] [13] ;
unsigned long long int arr_5 [13] [13] ;
long long int arr_8 [13] [13] ;
unsigned short arr_13 [13] [13] [13] [13] [13] [13] ;
unsigned long long int arr_14 [21] [21] ;
signed char arr_15 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (short)29260;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)57907;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = 10530756435755117099ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = -5820329246559541592LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)25821;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_14 [i_0] [i_1] = 14474649509992537991ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = (signed char)-87;
}

void checksum() {
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
    hash(&seed, var_29);
    hash(&seed, var_30);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
