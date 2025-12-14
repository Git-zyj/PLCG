#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1509607844;
unsigned int var_8 = 467823477U;
unsigned short var_10 = (unsigned short)57981;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 12249017207852123805ULL;
int var_15 = -1268219672;
unsigned char var_16 = (unsigned char)167;
short var_17 = (short)-6417;
_Bool var_18 = (_Bool)1;
short var_19 = (short)19745;
signed char var_20 = (signed char)-7;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
short arr_4 [22] [22] [22] ;
long long int arr_5 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)-3318;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1999852278028856405LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
