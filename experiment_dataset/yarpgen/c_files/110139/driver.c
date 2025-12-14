#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1438353880;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)29124;
_Bool var_3 = (_Bool)0;
unsigned short var_6 = (unsigned short)15512;
unsigned char var_7 = (unsigned char)174;
short var_8 = (short)32650;
unsigned long long int var_9 = 377658330169068000ULL;
unsigned int var_11 = 3021873149U;
int var_12 = -741490297;
int zero = 0;
unsigned long long int var_13 = 5108836944537847984ULL;
unsigned long long int var_14 = 7483211343898924436ULL;
unsigned int var_15 = 24070605U;
short var_16 = (short)-16347;
signed char var_17 = (signed char)-109;
unsigned short var_18 = (unsigned short)49428;
unsigned long long int arr_0 [17] ;
unsigned char arr_2 [17] ;
unsigned char arr_4 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 5795901157661233490ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)17 : (unsigned char)115;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)189 : (unsigned char)209;
}

void checksum() {
    hash(&seed, var_13);
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
