#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1950090524U;
short var_2 = (short)4251;
unsigned short var_3 = (unsigned short)32167;
short var_4 = (short)-18857;
_Bool var_5 = (_Bool)1;
signed char var_8 = (signed char)41;
unsigned short var_9 = (unsigned short)17291;
unsigned long long int var_10 = 2817938221200321604ULL;
unsigned int var_12 = 3064306385U;
unsigned long long int var_13 = 774433363394203136ULL;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-35;
int zero = 0;
unsigned int var_16 = 1358572829U;
short var_17 = (short)-12363;
long long int var_18 = -4903117397456519571LL;
unsigned long long int var_19 = 11053912657601222400ULL;
short var_20 = (short)14521;
signed char var_21 = (signed char)102;
_Bool var_22 = (_Bool)0;
short var_23 = (short)-26690;
unsigned long long int var_24 = 11386403752705267965ULL;
unsigned short var_25 = (unsigned short)45239;
unsigned long long int var_26 = 180613830374236072ULL;
unsigned long long int arr_1 [22] ;
unsigned long long int arr_2 [22] [22] ;
signed char arr_5 [22] [22] ;
unsigned int arr_6 [22] [22] [22] [22] ;
unsigned short arr_7 [22] [22] [22] ;
short arr_8 [22] ;
unsigned long long int arr_3 [22] ;
unsigned long long int arr_13 [22] [22] [22] ;
short arr_14 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 2974286621894375949ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 12185720039931149597ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)78;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 3788560216U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)17317;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (short)-31615;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 17693575934710634927ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 12347853766570922711ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_14 [i_0] [i_1] = (short)-188;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
