#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)14734;
int var_4 = -2121800138;
unsigned short var_6 = (unsigned short)19788;
short var_7 = (short)6341;
unsigned char var_8 = (unsigned char)29;
int var_9 = 1164441800;
_Bool var_10 = (_Bool)0;
long long int var_11 = -603560035657042460LL;
unsigned short var_12 = (unsigned short)64456;
long long int var_13 = -5302354922593984363LL;
unsigned short var_15 = (unsigned short)31923;
unsigned char var_16 = (unsigned char)16;
int zero = 0;
short var_17 = (short)-25105;
unsigned short var_18 = (unsigned short)40419;
int var_19 = 304275682;
unsigned long long int var_20 = 999572118262729201ULL;
unsigned short var_21 = (unsigned short)30916;
unsigned int var_22 = 270389149U;
long long int arr_15 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 8523931992869080006LL : -9123255076003470520LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
