#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5546;
int var_2 = 1986685695;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
_Bool var_7 = (_Bool)0;
unsigned char var_10 = (unsigned char)111;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
long long int var_15 = -8146832147107048712LL;
unsigned short var_18 = (unsigned short)58439;
unsigned short var_19 = (unsigned short)18345;
int zero = 0;
unsigned short var_20 = (unsigned short)63460;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)162;
long long int arr_5 [12] ;
_Bool arr_8 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -4271665188154384423LL : -4539534396269768800LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
