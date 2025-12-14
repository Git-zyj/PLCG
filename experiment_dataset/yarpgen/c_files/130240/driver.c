#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10904720486299228456ULL;
short var_2 = (short)31244;
long long int var_4 = 3465722568974924806LL;
int var_5 = 1488795191;
short var_7 = (short)15854;
short var_8 = (short)-10265;
int var_9 = 1271116071;
int var_11 = 2039678799;
unsigned long long int var_12 = 5830604288521137569ULL;
int var_13 = 1554002166;
short var_14 = (short)10611;
int var_15 = -2101289126;
int zero = 0;
unsigned short var_18 = (unsigned short)11384;
int var_19 = 1836666392;
int var_20 = -417700577;
int var_21 = 1846262710;
int var_22 = -41937647;
unsigned long long int arr_2 [11] [11] ;
long long int arr_6 [11] [11] ;
long long int arr_7 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 5065136193206325496ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = -1477237144381442409LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = 3662284092912022291LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
