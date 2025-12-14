#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1786064156;
unsigned char var_2 = (unsigned char)163;
unsigned char var_3 = (unsigned char)88;
int var_4 = -1005968257;
signed char var_5 = (signed char)-14;
unsigned short var_6 = (unsigned short)7940;
unsigned int var_7 = 2224330107U;
signed char var_9 = (signed char)73;
int var_10 = -696252036;
signed char var_12 = (signed char)102;
short var_13 = (short)8009;
unsigned short var_14 = (unsigned short)55050;
unsigned char var_15 = (unsigned char)51;
unsigned int var_16 = 3150845694U;
unsigned int var_17 = 3374535166U;
int zero = 0;
unsigned short var_18 = (unsigned short)20315;
int var_19 = 105184306;
int var_20 = -459652268;
int var_21 = 1328609141;
unsigned short var_22 = (unsigned short)13864;
signed char arr_0 [10] [10] ;
int arr_1 [10] ;
unsigned long long int arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)33;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 1594402534;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 3310265114848989092ULL : 5090725948661496547ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
