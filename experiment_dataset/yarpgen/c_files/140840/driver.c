#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 368154077U;
unsigned long long int var_3 = 3623956702510657558ULL;
int var_5 = 307013281;
unsigned long long int var_10 = 4657987281899501748ULL;
unsigned int var_11 = 2627088504U;
unsigned int var_13 = 1268287222U;
unsigned long long int var_14 = 11277161606797569926ULL;
long long int var_15 = -8909307296470518699LL;
unsigned char var_17 = (unsigned char)43;
int var_18 = 290716528;
int zero = 0;
int var_20 = 1240215117;
signed char var_21 = (signed char)-104;
long long int var_22 = 6487169601792680289LL;
long long int var_23 = -5969358899138083551LL;
short var_24 = (short)9038;
short var_25 = (short)32191;
short var_26 = (short)20315;
unsigned int var_27 = 362587477U;
unsigned char arr_7 [21] [21] [21] ;
unsigned int arr_11 [21] [21] [21] [21] [21] [21] [21] ;
signed char arr_13 [21] ;
short arr_14 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)202 : (unsigned char)223;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 21; ++i_6) 
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_3 % 2 == 0) ? 28314788U : 103910808U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (signed char)(-127 - 1);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_14 [i_0] [i_1] = (short)-5392;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
