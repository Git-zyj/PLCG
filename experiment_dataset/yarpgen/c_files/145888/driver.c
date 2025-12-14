#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 394514343840227933ULL;
int var_1 = -1694773098;
unsigned short var_2 = (unsigned short)9801;
short var_3 = (short)-4129;
short var_7 = (short)-15140;
unsigned char var_9 = (unsigned char)175;
int var_11 = -672710474;
int var_12 = 205111916;
unsigned char var_13 = (unsigned char)23;
unsigned char var_14 = (unsigned char)126;
int var_15 = 1574731938;
signed char var_16 = (signed char)108;
unsigned char var_18 = (unsigned char)97;
int zero = 0;
int var_19 = -1403093025;
unsigned short var_20 = (unsigned short)4962;
unsigned short var_21 = (unsigned short)9216;
long long int var_22 = -1051014922677733704LL;
unsigned int var_23 = 2118466946U;
_Bool arr_0 [21] ;
unsigned short arr_1 [21] ;
unsigned char arr_2 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)9360;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)166;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
