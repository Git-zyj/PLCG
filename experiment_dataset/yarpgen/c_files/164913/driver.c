#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 340282042U;
unsigned char var_4 = (unsigned char)25;
int var_9 = -1156352033;
unsigned int var_10 = 447792846U;
long long int var_13 = 2934906010582974910LL;
unsigned int var_18 = 1190004092U;
int zero = 0;
long long int var_19 = -8879201692383020702LL;
long long int var_20 = -7479947446782838069LL;
long long int var_21 = 7614462240830192180LL;
unsigned int var_22 = 2047707084U;
long long int var_23 = 5314266565043096899LL;
long long int var_24 = 3693605229699607424LL;
unsigned char var_25 = (unsigned char)154;
unsigned long long int var_26 = 1222783895667760573ULL;
int var_27 = 1763534559;
long long int arr_1 [17] ;
unsigned short arr_2 [17] [17] ;
unsigned int arr_4 [15] ;
unsigned short arr_6 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = -7952789801809400031LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)39184;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 2193568443U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (unsigned short)17386;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
