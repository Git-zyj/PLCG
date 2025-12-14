#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8772353007498519447LL;
unsigned long long int var_1 = 16913427453984005428ULL;
unsigned short var_2 = (unsigned short)39427;
unsigned int var_4 = 1771822917U;
int var_5 = 294319697;
long long int var_7 = 5827777755398421593LL;
unsigned int var_9 = 1097394801U;
long long int var_11 = -6098553890715520750LL;
int var_12 = -1859875152;
long long int var_13 = 4982244830800068168LL;
unsigned short var_15 = (unsigned short)49734;
unsigned int var_16 = 3113212940U;
int var_17 = -1535988958;
int zero = 0;
unsigned int var_18 = 3214492187U;
int var_19 = 1780790302;
unsigned long long int var_20 = 12103183216354288815ULL;
signed char var_21 = (signed char)-111;
unsigned short var_22 = (unsigned short)39536;
long long int var_23 = -1280959083894655903LL;
int var_24 = 1608973604;
short var_25 = (short)10152;
int arr_0 [21] ;
unsigned long long int arr_2 [21] ;
unsigned long long int arr_6 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = -347438847;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2761980803381644990ULL : 2932644649996887344ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = 16020382983340023255ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
