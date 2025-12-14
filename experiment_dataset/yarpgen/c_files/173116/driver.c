#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-102;
unsigned long long int var_1 = 2370470080872533814ULL;
unsigned long long int var_2 = 8056122005401044215ULL;
unsigned int var_3 = 4023172377U;
long long int var_4 = -4966250409303964021LL;
unsigned int var_5 = 663876109U;
int var_7 = -1025765102;
unsigned int var_8 = 3789266885U;
unsigned int var_14 = 1298501823U;
int zero = 0;
unsigned char var_17 = (unsigned char)177;
unsigned int var_18 = 3605373177U;
long long int var_19 = 8668847414298093612LL;
signed char var_20 = (signed char)117;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-10;
signed char var_23 = (signed char)-88;
unsigned short arr_0 [22] ;
unsigned long long int arr_2 [22] [22] ;
long long int arr_4 [22] [22] [22] ;
int arr_6 [25] ;
short arr_11 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned short)32338;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 9382040487747873198ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 2243357683084223888LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 760268238 : -1609340568;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-4613 : (short)24838;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
