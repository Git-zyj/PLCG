#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7193057660254797766LL;
unsigned char var_1 = (unsigned char)142;
long long int var_2 = -1710359952741298484LL;
short var_4 = (short)4751;
unsigned long long int var_5 = 2348748502883815151ULL;
unsigned long long int var_7 = 4982230250393763295ULL;
signed char var_14 = (signed char)122;
int var_15 = 543273652;
unsigned long long int var_16 = 15968006516742792034ULL;
signed char var_18 = (signed char)38;
int zero = 0;
unsigned char var_20 = (unsigned char)211;
unsigned int var_21 = 1617402549U;
unsigned char var_22 = (unsigned char)99;
unsigned short var_23 = (unsigned short)47836;
unsigned char var_24 = (unsigned char)248;
short arr_2 [17] [17] ;
unsigned char arr_3 [17] [17] [17] ;
_Bool arr_5 [17] [17] ;
unsigned char arr_9 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)27835 : (short)29101;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)246;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned char)204;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
