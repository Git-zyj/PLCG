#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)306;
unsigned int var_11 = 4024927080U;
int zero = 0;
short var_12 = (short)-6014;
long long int var_13 = -3159507863484320281LL;
long long int var_14 = -4393819483810107479LL;
long long int var_15 = -6026612559420973830LL;
long long int var_16 = 3788927159874444000LL;
signed char arr_0 [14] ;
long long int arr_1 [14] ;
unsigned short arr_2 [14] [14] ;
long long int arr_5 [14] [14] ;
_Bool arr_6 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (signed char)74;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = -309477807561649433LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)59174;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 7575247177151069791LL : -7032205287000625705LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
