#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -9222629088155502308LL;
unsigned short var_8 = (unsigned short)19996;
unsigned char var_9 = (unsigned char)43;
int zero = 0;
unsigned int var_12 = 437177181U;
unsigned char var_13 = (unsigned char)20;
unsigned long long int var_14 = 17992043176265242143ULL;
unsigned short var_15 = (unsigned short)52928;
unsigned int var_16 = 2163003538U;
unsigned char var_17 = (unsigned char)68;
unsigned short arr_0 [18] [18] ;
unsigned int arr_1 [18] ;
unsigned char arr_2 [18] [18] [18] ;
int arr_3 [18] [18] [18] ;
unsigned int arr_4 [18] ;
unsigned short arr_7 [18] ;
unsigned char arr_8 [18] [18] [18] ;
short arr_9 [18] ;
unsigned char arr_10 [18] [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)64497;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 1927485986U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)243;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -722059572;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 1853635151U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (unsigned short)17508;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)108;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (short)-28515;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)110;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
