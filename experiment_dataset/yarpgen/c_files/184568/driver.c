#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31919;
unsigned long long int var_1 = 16207841660128280591ULL;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 103358571U;
_Bool var_5 = (_Bool)1;
long long int var_6 = 165593366489916199LL;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-58;
int var_15 = -935948751;
int zero = 0;
unsigned long long int var_17 = 619782556938274133ULL;
unsigned long long int var_18 = 8620006805781560873ULL;
int var_19 = -802521956;
short var_20 = (short)30834;
unsigned long long int var_21 = 5896744684088856672ULL;
long long int var_22 = 4358786614283553879LL;
unsigned char var_23 = (unsigned char)184;
signed char var_24 = (signed char)48;
unsigned int var_25 = 2364370171U;
unsigned short var_26 = (unsigned short)4083;
long long int var_27 = -7537751942001260071LL;
unsigned int var_28 = 1400193122U;
unsigned long long int var_29 = 17204666606112729054ULL;
short var_30 = (short)25778;
unsigned char var_31 = (unsigned char)170;
short var_32 = (short)-27753;
long long int arr_17 [10] [10] [10] [10] ;
short arr_18 [10] [10] [10] [10] [10] ;
int arr_23 [24] [24] ;
unsigned int arr_26 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = -1680638854355256195LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-11592;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_23 [i_0] [i_1] = -1809759915;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_26 [i_0] = 2097977671U;
}

void checksum() {
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
    hash(&seed, var_31);
    hash(&seed, var_32);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
