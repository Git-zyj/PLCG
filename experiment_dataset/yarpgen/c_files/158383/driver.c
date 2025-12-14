#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)59;
unsigned short var_2 = (unsigned short)63040;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 3924339563U;
long long int var_6 = 3387151820209517060LL;
_Bool var_10 = (_Bool)0;
int var_12 = 1553050173;
int zero = 0;
short var_13 = (short)24974;
unsigned long long int var_14 = 18078133615502401885ULL;
signed char var_15 = (signed char)-104;
unsigned char var_16 = (unsigned char)192;
unsigned short var_17 = (unsigned short)44354;
int var_18 = 961099784;
unsigned short var_19 = (unsigned short)37025;
long long int var_20 = 3834671623431545206LL;
unsigned long long int arr_0 [21] ;
unsigned long long int arr_1 [21] ;
unsigned char arr_2 [12] ;
unsigned long long int arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 5424713175029676561ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 14164215546129281653ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned char)92;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 9904309503965957762ULL : 998639182546520610ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
