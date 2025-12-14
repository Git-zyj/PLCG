#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1071333935;
unsigned int var_1 = 2080321274U;
int var_2 = -2099001062;
unsigned short var_3 = (unsigned short)27215;
long long int var_4 = 4272590127712723008LL;
unsigned int var_9 = 1419199659U;
unsigned long long int var_11 = 2541918454165469398ULL;
int zero = 0;
signed char var_13 = (signed char)44;
long long int var_14 = -9146295488971919270LL;
unsigned char var_15 = (unsigned char)116;
short var_16 = (short)-30660;
long long int var_17 = 5383692301356076968LL;
short var_18 = (short)-31527;
long long int var_19 = -8400207285136708783LL;
unsigned long long int var_20 = 7540544784467695969ULL;
unsigned int var_21 = 3347651378U;
int arr_2 [25] ;
unsigned long long int arr_3 [25] ;
unsigned long long int arr_8 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 482094940;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 16501068692772769046ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = 13744848000654909857ULL;
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
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
