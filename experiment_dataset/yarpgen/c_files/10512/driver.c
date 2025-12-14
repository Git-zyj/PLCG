#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)41;
int var_1 = 358677203;
unsigned short var_3 = (unsigned short)58921;
unsigned long long int var_4 = 6737536938472084836ULL;
unsigned char var_5 = (unsigned char)117;
unsigned short var_6 = (unsigned short)5756;
unsigned char var_7 = (unsigned char)215;
unsigned char var_11 = (unsigned char)22;
unsigned char var_13 = (unsigned char)6;
int zero = 0;
unsigned long long int var_20 = 303436778113244519ULL;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)208;
unsigned int arr_1 [19] ;
short arr_2 [19] [19] ;
_Bool arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 3170338823U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (short)9183;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
