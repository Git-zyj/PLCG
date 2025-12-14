#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1032097975;
unsigned char var_5 = (unsigned char)117;
unsigned short var_6 = (unsigned short)53603;
unsigned short var_8 = (unsigned short)36418;
short var_9 = (short)-25002;
unsigned int var_10 = 2961187219U;
short var_12 = (short)22369;
int zero = 0;
unsigned int var_15 = 1514209619U;
unsigned long long int var_16 = 8293079608701457095ULL;
long long int var_17 = -7676853033913471931LL;
short var_18 = (short)23859;
long long int var_19 = -177604078694333819LL;
signed char var_20 = (signed char)30;
_Bool arr_0 [12] [12] ;
int arr_1 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 31550731;
}

void checksum() {
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
