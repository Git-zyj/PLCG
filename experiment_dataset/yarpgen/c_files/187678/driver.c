#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33306;
short var_5 = (short)9424;
signed char var_7 = (signed char)-34;
unsigned int var_8 = 705108450U;
unsigned char var_14 = (unsigned char)58;
int zero = 0;
unsigned short var_16 = (unsigned short)3458;
short var_17 = (short)-30007;
unsigned long long int var_18 = 5231083103598051812ULL;
signed char var_19 = (signed char)32;
unsigned short var_20 = (unsigned short)23768;
long long int var_21 = -8704538687855779615LL;
unsigned short var_22 = (unsigned short)7218;
unsigned int arr_3 [24] [24] ;
signed char arr_5 [24] [24] ;
unsigned short arr_7 [21] ;
long long int arr_14 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 1981743992U : 3000884255U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-108;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (unsigned short)64049;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 9178032263308830266LL : -2043214725954004345LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
