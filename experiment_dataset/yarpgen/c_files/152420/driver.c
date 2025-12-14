#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 225074254;
long long int var_1 = 7391508231608020664LL;
unsigned short var_2 = (unsigned short)59524;
unsigned short var_8 = (unsigned short)2330;
int var_10 = 1906821913;
unsigned char var_11 = (unsigned char)126;
short var_12 = (short)-22833;
int var_13 = 1952147246;
unsigned char var_16 = (unsigned char)40;
long long int var_17 = 7316568030834319932LL;
_Bool var_18 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)-119;
int var_20 = -395169325;
short var_21 = (short)4584;
long long int var_22 = 6504947687911683670LL;
long long int var_23 = -843935346988257251LL;
short var_24 = (short)5478;
long long int arr_0 [24] ;
int arr_1 [24] ;
long long int arr_4 [17] ;
unsigned int arr_5 [17] ;
unsigned short arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 3754072736487336167LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -1146311148;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -9105905957683399995LL : 8230357204081562653LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 4250877347U : 2310592181U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)59025 : (unsigned short)34;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
