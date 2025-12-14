#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9168088622386122548LL;
unsigned long long int var_1 = 8940550046060842423ULL;
signed char var_2 = (signed char)41;
signed char var_4 = (signed char)-21;
unsigned long long int var_5 = 13400055360310196674ULL;
signed char var_6 = (signed char)-113;
long long int var_7 = -1006664298340741160LL;
unsigned int var_8 = 3993604629U;
long long int var_10 = 2756583896915926263LL;
int zero = 0;
long long int var_12 = -6781954034080499275LL;
unsigned int var_13 = 4165566322U;
unsigned int var_14 = 746825799U;
signed char var_15 = (signed char)32;
unsigned long long int var_16 = 1271938636210301162ULL;
unsigned long long int var_17 = 17610991154299099376ULL;
long long int arr_0 [20] [20] ;
long long int arr_1 [20] ;
signed char arr_2 [20] ;
signed char arr_3 [16] [16] ;
signed char arr_6 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 7354196003288265087LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 6840869207241925160LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (signed char)83;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)104 : (signed char)84;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (signed char)82;
}

void checksum() {
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
