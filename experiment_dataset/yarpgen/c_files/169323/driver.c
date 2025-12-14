#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17728;
int var_1 = -1233993821;
unsigned short var_2 = (unsigned short)32909;
unsigned long long int var_3 = 5868311470479219070ULL;
int var_5 = 1715649803;
unsigned char var_9 = (unsigned char)76;
unsigned short var_10 = (unsigned short)39077;
int var_11 = -178237368;
int zero = 0;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-25474;
unsigned char var_17 = (unsigned char)42;
int var_18 = -84092980;
int var_19 = -2062829848;
_Bool arr_0 [15] [15] ;
unsigned long long int arr_3 [15] [15] ;
int arr_4 [15] ;
short arr_7 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 11955726800487939069ULL : 948334624839097116ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 1628624435;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (short)-5667 : (short)21172;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
