#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)82;
short var_1 = (short)1878;
unsigned int var_3 = 2327669030U;
signed char var_4 = (signed char)-105;
int var_7 = 1703833488;
int zero = 0;
long long int var_11 = -1575478176324616420LL;
long long int var_12 = 922860163978162694LL;
short var_13 = (short)30661;
short var_14 = (short)17222;
unsigned char var_15 = (unsigned char)141;
unsigned int var_16 = 891631187U;
short var_17 = (short)-25680;
long long int arr_3 [21] [21] [21] ;
unsigned long long int arr_6 [21] [21] [21] ;
long long int arr_8 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 7888281047887371660LL : 1062112401295258256LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 6035597991392374912ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = -7492668868716081125LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
