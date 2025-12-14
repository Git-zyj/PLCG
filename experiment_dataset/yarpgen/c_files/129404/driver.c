#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1982775879;
unsigned int var_2 = 3489077301U;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)38274;
short var_6 = (short)-24317;
long long int var_8 = 5183597201175358624LL;
unsigned char var_9 = (unsigned char)222;
unsigned short var_10 = (unsigned short)25571;
unsigned short var_11 = (unsigned short)370;
_Bool var_12 = (_Bool)1;
int zero = 0;
long long int var_14 = 1842861561787917545LL;
unsigned char var_15 = (unsigned char)25;
short var_16 = (short)-28280;
unsigned int var_17 = 4084624358U;
int var_18 = 863947359;
long long int arr_0 [23] ;
unsigned short arr_10 [23] [23] [23] [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 7794669942730746515LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)19820;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
