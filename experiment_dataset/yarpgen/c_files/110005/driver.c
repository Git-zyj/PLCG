#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1717913272U;
int var_2 = 249635533;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)46016;
_Bool var_5 = (_Bool)1;
signed char var_7 = (signed char)77;
unsigned int var_8 = 2273366196U;
long long int var_10 = 6525132347887244404LL;
_Bool var_11 = (_Bool)1;
int zero = 0;
short var_13 = (short)5146;
long long int var_14 = -4221344748173563667LL;
long long int var_15 = 8782067811448017887LL;
long long int var_16 = 7498398584609028849LL;
long long int var_17 = 9113454704102548907LL;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 8739056945345028060ULL;
long long int var_20 = 3683177702223223904LL;
unsigned int var_21 = 1637093057U;
_Bool var_22 = (_Bool)0;
unsigned short arr_0 [23] ;
_Bool arr_1 [23] ;
unsigned long long int arr_2 [23] ;
unsigned char arr_3 [23] [23] ;
unsigned short arr_4 [23] ;
unsigned long long int arr_9 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned short)27062;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 9282287289731052713ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (unsigned short)37356;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 12508107477982805263ULL;
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
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
