#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)157;
unsigned char var_2 = (unsigned char)195;
unsigned char var_3 = (unsigned char)111;
long long int var_5 = -2459347222446264718LL;
_Bool var_6 = (_Bool)0;
short var_8 = (short)-5041;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 1485430566U;
unsigned short var_12 = (unsigned short)18154;
signed char var_13 = (signed char)-120;
long long int var_14 = -2760341322549328085LL;
short arr_1 [24] [24] ;
unsigned short arr_5 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-5822;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)54768;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
