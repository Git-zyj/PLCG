#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6732511356971436848LL;
unsigned char var_2 = (unsigned char)144;
unsigned short var_3 = (unsigned short)18239;
short var_4 = (short)13055;
int var_5 = -40996240;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)219;
short var_8 = (short)-25740;
int zero = 0;
int var_12 = 1131913196;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-3569;
signed char var_15 = (signed char)-87;
short var_16 = (short)-11376;
short var_17 = (short)-8940;
short var_18 = (short)-19498;
unsigned char var_19 = (unsigned char)96;
unsigned short arr_0 [22] ;
_Bool arr_2 [22] [22] ;
unsigned long long int arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned short)2518;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 13034430836286010207ULL : 14661861815611700176ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
