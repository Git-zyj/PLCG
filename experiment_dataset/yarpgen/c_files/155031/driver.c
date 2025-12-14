#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)56323;
long long int var_2 = 42931559470896003LL;
unsigned char var_4 = (unsigned char)13;
unsigned char var_5 = (unsigned char)151;
int var_6 = -773295701;
long long int var_7 = 1101660437428009578LL;
int var_8 = 367201496;
signed char var_10 = (signed char)-108;
int zero = 0;
int var_11 = -1637950931;
unsigned short var_12 = (unsigned short)895;
unsigned short var_13 = (unsigned short)50183;
short var_14 = (short)-13056;
unsigned long long int var_15 = 9859471842390620152ULL;
short var_16 = (short)10934;
int arr_1 [25] ;
int arr_2 [25] ;
long long int arr_3 [25] [25] ;
unsigned char arr_4 [25] ;
short arr_8 [25] [25] [25] [25] ;
short arr_10 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 1542218395;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = -1858136609;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = -3507339166864234795LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned char)164;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (short)4860;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (short)-20896;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
