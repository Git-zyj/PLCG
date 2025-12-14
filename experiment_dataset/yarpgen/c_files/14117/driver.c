#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-13379;
_Bool var_2 = (_Bool)0;
short var_4 = (short)-29231;
unsigned short var_5 = (unsigned short)26507;
long long int var_8 = -4010521423081943792LL;
signed char var_9 = (signed char)-5;
int zero = 0;
unsigned short var_10 = (unsigned short)45725;
signed char var_11 = (signed char)26;
_Bool var_12 = (_Bool)1;
long long int var_13 = -7554781393601348086LL;
signed char var_14 = (signed char)-120;
unsigned short var_15 = (unsigned short)15930;
long long int var_16 = -1200571470639734905LL;
signed char var_17 = (signed char)115;
long long int arr_0 [21] ;
unsigned int arr_1 [21] ;
short arr_2 [21] ;
unsigned char arr_3 [16] [16] ;
unsigned int arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 5333278050783041277LL : 5014964720983946797LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 46734525U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (short)9332;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 2578836165U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
