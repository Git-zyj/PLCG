#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62845;
unsigned short var_1 = (unsigned short)57845;
unsigned long long int var_2 = 7770045700685155917ULL;
_Bool var_3 = (_Bool)1;
int var_4 = 1435802005;
long long int var_5 = 9016182804024093848LL;
short var_7 = (short)-17688;
unsigned short var_8 = (unsigned short)28215;
unsigned long long int var_9 = 625867716125582885ULL;
int zero = 0;
long long int var_11 = -3767933120692619038LL;
unsigned short var_12 = (unsigned short)35999;
unsigned int var_13 = 3562539900U;
unsigned char var_14 = (unsigned char)241;
unsigned short var_15 = (unsigned short)55921;
unsigned short var_16 = (unsigned short)10066;
unsigned char var_17 = (unsigned char)144;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)32449;
unsigned long long int arr_1 [12] [12] ;
long long int arr_3 [12] [12] [12] ;
signed char arr_6 [12] [12] [12] [12] ;
unsigned long long int arr_7 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 4879340548892009486ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -9045493049163757002LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (signed char)-74;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = 1009048282634635757ULL;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
