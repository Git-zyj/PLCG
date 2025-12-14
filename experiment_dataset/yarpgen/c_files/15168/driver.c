#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-13191;
signed char var_7 = (signed char)-38;
int zero = 0;
unsigned long long int var_16 = 4096169154587138361ULL;
unsigned int var_17 = 3601978383U;
long long int var_18 = -4927625856977751516LL;
long long int var_19 = -7049084315311508217LL;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 16614865405679736973ULL;
short var_22 = (short)-3717;
signed char var_23 = (signed char)118;
unsigned short var_24 = (unsigned short)44903;
short var_25 = (short)18061;
_Bool var_26 = (_Bool)1;
unsigned char var_27 = (unsigned char)209;
_Bool var_28 = (_Bool)0;
signed char var_29 = (signed char)73;
_Bool var_30 = (_Bool)1;
unsigned long long int arr_4 [15] [15] ;
signed char arr_19 [22] ;
unsigned int arr_26 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 13437354854114726104ULL : 3172541036363145617ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_19 [i_0] = (signed char)-29;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = 79734572U;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
