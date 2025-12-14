#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-27;
unsigned short var_2 = (unsigned short)38344;
signed char var_3 = (signed char)-70;
short var_6 = (short)-31189;
unsigned long long int var_8 = 3860929593217174187ULL;
long long int var_12 = -2024613380804774334LL;
long long int var_13 = 7979269351765583215LL;
signed char var_14 = (signed char)30;
unsigned int var_15 = 2284025593U;
unsigned char var_16 = (unsigned char)42;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 5688197322221215994ULL;
unsigned char arr_2 [25] ;
long long int arr_3 [25] [25] ;
unsigned char arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)82 : (unsigned char)198;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 5448966779720912415LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)171 : (unsigned char)54;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
