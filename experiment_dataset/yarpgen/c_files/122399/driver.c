#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned int var_6 = 3988854039U;
short var_9 = (short)24775;
unsigned int var_11 = 1948406416U;
unsigned char var_14 = (unsigned char)233;
unsigned short var_16 = (unsigned short)11374;
int zero = 0;
unsigned char var_18 = (unsigned char)171;
int var_19 = 352741279;
signed char var_20 = (signed char)-63;
_Bool var_21 = (_Bool)0;
long long int var_22 = 7138629119951477044LL;
int var_23 = 217574543;
long long int arr_2 [15] ;
int arr_3 [15] [15] [15] ;
int arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 5554201827401696178LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -426836659;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -1806615795 : 1218597063;
}

void checksum() {
    hash(&seed, var_18);
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
