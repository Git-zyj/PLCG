#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2037414225U;
long long int var_2 = 7516008387898938568LL;
unsigned char var_3 = (unsigned char)201;
unsigned char var_4 = (unsigned char)139;
unsigned short var_5 = (unsigned short)44684;
unsigned short var_6 = (unsigned short)9661;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 6683923032933724487ULL;
unsigned short var_9 = (unsigned short)5604;
unsigned long long int var_10 = 7348310262989301469ULL;
int var_11 = -359134897;
unsigned short var_12 = (unsigned short)618;
int zero = 0;
unsigned long long int var_13 = 11454848664792885346ULL;
long long int var_14 = 3606861333117013792LL;
int var_15 = -536157875;
unsigned char var_16 = (unsigned char)54;
int var_17 = 521955988;
signed char var_18 = (signed char)117;
long long int var_19 = 4890409494360919689LL;
short var_20 = (short)19586;
signed char arr_0 [20] [20] ;
unsigned char arr_1 [20] ;
int arr_2 [20] [20] [20] ;
int arr_3 [20] ;
unsigned int arr_6 [20] [20] [20] ;
unsigned char arr_7 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)19;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1630112797 : 316903542;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 1414211306;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 3889010811U : 2200067282U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)18 : (unsigned char)237;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
