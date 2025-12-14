#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3378175478U;
long long int var_1 = 5653805258849844621LL;
short var_2 = (short)20812;
signed char var_3 = (signed char)65;
_Bool var_5 = (_Bool)1;
int var_6 = -1056247804;
unsigned int var_8 = 735496107U;
_Bool var_11 = (_Bool)1;
unsigned short var_13 = (unsigned short)51067;
int zero = 0;
unsigned char var_14 = (unsigned char)192;
signed char var_15 = (signed char)25;
unsigned short var_16 = (unsigned short)29406;
unsigned short var_17 = (unsigned short)33040;
long long int var_18 = -3965411433990000704LL;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)252;
_Bool arr_1 [25] [25] ;
int arr_6 [25] [25] [25] ;
_Bool arr_7 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1580357562 : -2116922420;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
