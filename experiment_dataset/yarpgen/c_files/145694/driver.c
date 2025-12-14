#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15387195876039012824ULL;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)105;
unsigned short var_5 = (unsigned short)21244;
long long int var_8 = 4408779600590605116LL;
unsigned int var_11 = 1040000558U;
int var_12 = -1448217493;
int zero = 0;
unsigned int var_15 = 3959805359U;
short var_16 = (short)-16031;
short var_17 = (short)16133;
long long int var_18 = 6633384789443333420LL;
unsigned char var_19 = (unsigned char)223;
unsigned char arr_3 [14] [14] ;
unsigned short arr_4 [14] ;
unsigned long long int arr_6 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)102;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (unsigned short)13386;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = 18038097611212616060ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
