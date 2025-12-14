#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1533841694U;
signed char var_5 = (signed char)-125;
int var_6 = -1427492233;
signed char var_7 = (signed char)111;
long long int var_8 = -5741875399692927971LL;
signed char var_10 = (signed char)17;
signed char var_11 = (signed char)-38;
long long int var_12 = -2673166650533633849LL;
unsigned int var_14 = 2692200865U;
int var_15 = -609878000;
int zero = 0;
long long int var_18 = -8609678441368722528LL;
long long int var_19 = 2960985794830000163LL;
int var_20 = -1052837660;
int var_21 = 1789860269;
signed char var_22 = (signed char)120;
long long int var_23 = -1483996630435709237LL;
int var_24 = -301508024;
int arr_0 [13] ;
unsigned long long int arr_1 [13] ;
signed char arr_2 [14] [14] ;
unsigned short arr_3 [14] ;
signed char arr_4 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 223310009;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 6353072723139908638ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-7 : (signed char)-127;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)13372 : (unsigned short)33536;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)-47 : (signed char)4;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
