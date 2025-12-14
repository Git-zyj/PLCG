#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2067239419;
long long int var_2 = 9110453190001350940LL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 13454852711718931191ULL;
unsigned short var_9 = (unsigned short)35233;
unsigned char var_10 = (unsigned char)40;
int zero = 0;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-26130;
unsigned char var_13 = (unsigned char)110;
int var_14 = -1880806694;
short var_15 = (short)22775;
int var_16 = 342850318;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 1852220600281112490ULL;
short var_19 = (short)-15879;
unsigned char arr_0 [15] ;
unsigned short arr_7 [15] [15] [15] [15] ;
int arr_14 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned char)90;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned short)18741;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 1546697682 : -2080168830;
}

void checksum() {
    hash(&seed, var_11);
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
