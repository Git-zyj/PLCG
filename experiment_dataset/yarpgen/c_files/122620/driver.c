#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2621429653164807111ULL;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 9455066090694697882ULL;
unsigned int var_3 = 1506861438U;
unsigned long long int var_4 = 392370746909679830ULL;
unsigned long long int var_5 = 14195671931062263388ULL;
int var_6 = 1717259098;
long long int var_7 = -6799855308962956163LL;
_Bool var_8 = (_Bool)1;
short var_9 = (short)31151;
unsigned long long int var_10 = 11970329239227403238ULL;
signed char var_11 = (signed char)-96;
signed char var_12 = (signed char)-126;
int var_13 = -253555765;
unsigned long long int var_14 = 3308726295664400140ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)218;
int var_16 = -969809235;
unsigned long long int var_17 = 11231715343756335094ULL;
unsigned long long int var_18 = 18063008399298868980ULL;
long long int var_19 = -6501569579146231604LL;
unsigned long long int var_20 = 15431651598010363370ULL;
long long int var_21 = 3544038940971822655LL;
_Bool var_22 = (_Bool)0;
int var_23 = 943349952;
unsigned long long int var_24 = 3238949444686057913ULL;
long long int var_25 = 7375427237726034367LL;
signed char arr_3 [25] [25] ;
unsigned char arr_12 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-21;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)213;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
