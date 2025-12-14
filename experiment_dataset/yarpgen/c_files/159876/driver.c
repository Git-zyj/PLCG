#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 48104373U;
short var_1 = (short)19537;
short var_2 = (short)-15901;
long long int var_4 = 2914189722546927502LL;
short var_5 = (short)4927;
unsigned int var_6 = 514946146U;
unsigned int var_7 = 2337772644U;
long long int var_8 = 8511342322349740167LL;
short var_9 = (short)12906;
long long int var_10 = 2188783618163300769LL;
signed char var_11 = (signed char)51;
unsigned long long int var_12 = 12326627595808195359ULL;
unsigned long long int var_13 = 1031855481558419120ULL;
signed char var_16 = (signed char)118;
unsigned long long int var_17 = 2615531594217424558ULL;
unsigned int var_18 = 825081725U;
int zero = 0;
long long int var_19 = 1211552044858620930LL;
long long int var_20 = -1801333000663354017LL;
signed char var_21 = (signed char)21;
long long int var_22 = 5452143314985830372LL;
unsigned int var_23 = 2274958203U;
short var_24 = (short)28406;
short var_25 = (short)-13732;
signed char var_26 = (signed char)102;
unsigned char var_27 = (unsigned char)51;
long long int var_28 = 2336322288770913794LL;
unsigned int var_29 = 1393572724U;
unsigned int var_30 = 1824627428U;
long long int arr_13 [22] ;
unsigned long long int arr_23 [22] ;
long long int arr_24 [22] [22] [22] [22] ;
unsigned char arr_25 [22] ;
unsigned int arr_31 [22] [22] ;
unsigned int arr_32 [22] [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? -7547482036086160608LL : 6207561736919200466LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? 18444426130124109751ULL : 6392119675377879984ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 2668666747016198321LL : 1411430955943251370LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? (unsigned char)135 : (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_31 [i_0] [i_1] = (i_0 % 2 == 0) ? 175190679U : 904903926U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 1503788816U : 1268436192U;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_31 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        hash(&seed, arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
