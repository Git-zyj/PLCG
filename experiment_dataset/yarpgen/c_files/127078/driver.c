#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)213;
unsigned long long int var_4 = 14771838143676847217ULL;
unsigned long long int var_5 = 12213380665694014787ULL;
signed char var_6 = (signed char)-112;
unsigned long long int var_7 = 14894113642121673116ULL;
unsigned char var_8 = (unsigned char)88;
long long int var_13 = 1520953949326459753LL;
unsigned char var_14 = (unsigned char)162;
int var_15 = 762770679;
int zero = 0;
short var_17 = (short)4622;
signed char var_18 = (signed char)-42;
unsigned char var_19 = (unsigned char)216;
short var_20 = (short)16252;
unsigned long long int var_21 = 2597939552835328979ULL;
signed char arr_3 [20] ;
unsigned int arr_4 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (signed char)-29;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 3536905959U : 3306658484U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
