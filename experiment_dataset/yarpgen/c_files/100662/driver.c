#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1003208487;
unsigned short var_3 = (unsigned short)26461;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 16651403137116293999ULL;
unsigned long long int var_7 = 5989823961317241047ULL;
unsigned int var_9 = 4174857254U;
unsigned long long int var_10 = 18191009269748043723ULL;
unsigned long long int var_11 = 13780909817943731717ULL;
int zero = 0;
int var_14 = -1854640214;
short var_15 = (short)-9782;
unsigned int var_16 = 1505347537U;
short arr_1 [16] [16] ;
unsigned short arr_2 [16] [16] [16] ;
int arr_3 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (short)15124;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)31756;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1637655398;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
