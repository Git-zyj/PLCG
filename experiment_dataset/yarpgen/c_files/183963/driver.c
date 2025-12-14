#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-26164;
short var_6 = (short)-9185;
long long int var_8 = -1056586383611288101LL;
unsigned short var_9 = (unsigned short)42226;
int zero = 0;
unsigned int var_11 = 725902078U;
unsigned short var_12 = (unsigned short)3550;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-120;
unsigned int var_15 = 4132160910U;
unsigned short arr_6 [20] ;
unsigned short arr_7 [20] [20] [20] ;
int arr_8 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (unsigned short)64041;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)56167;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = -293817618;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
