#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 205340438;
unsigned char var_2 = (unsigned char)210;
unsigned long long int var_6 = 12968129485319937831ULL;
long long int var_8 = -2387647401894252448LL;
unsigned char var_10 = (unsigned char)80;
_Bool var_12 = (_Bool)1;
long long int var_14 = 4476442447550964279LL;
int zero = 0;
long long int var_15 = -6219333393200983817LL;
unsigned char var_16 = (unsigned char)70;
long long int var_17 = 706930581814048487LL;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)180;
unsigned long long int arr_0 [21] ;
unsigned char arr_1 [21] [21] ;
unsigned short arr_5 [21] ;
_Bool arr_2 [21] ;
int arr_7 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 9314755860868002192ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)241 : (unsigned char)91;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (unsigned short)52813;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = -582020603;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
