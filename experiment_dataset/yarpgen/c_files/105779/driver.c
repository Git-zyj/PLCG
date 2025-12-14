#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3095699124U;
unsigned int var_1 = 1276995104U;
unsigned int var_2 = 2267000819U;
long long int var_3 = -1810264645830000197LL;
long long int var_4 = -4346617335690617357LL;
unsigned int var_5 = 853748722U;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 14462479932316684142ULL;
unsigned int var_10 = 3004557272U;
long long int var_12 = 2148419134224214555LL;
int var_15 = -1860872197;
short var_16 = (short)-21395;
int zero = 0;
unsigned int var_17 = 1856605101U;
int var_18 = -203426503;
long long int var_19 = 3280379970484508956LL;
int var_20 = -699044811;
long long int var_21 = 6139289374143125329LL;
int var_22 = 259242300;
long long int arr_0 [23] [23] ;
unsigned int arr_2 [23] ;
unsigned long long int arr_6 [23] [23] [23] ;
short arr_8 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = -4134963227453641717LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 3022784146U : 1722134724U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 11212821107270000864ULL : 12125205239612926374ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (short)20716;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
