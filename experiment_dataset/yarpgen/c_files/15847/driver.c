#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)85;
_Bool var_11 = (_Bool)0;
long long int var_13 = 5488369728683902118LL;
int zero = 0;
unsigned int var_16 = 4057764656U;
unsigned short var_17 = (unsigned short)43536;
unsigned short var_18 = (unsigned short)60662;
unsigned char var_19 = (unsigned char)231;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 2490959081809163429ULL;
_Bool arr_1 [10] ;
int arr_2 [10] [10] [10] ;
unsigned long long int arr_5 [22] [22] ;
signed char arr_7 [22] ;
unsigned int arr_8 [22] ;
signed char arr_9 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 279494117;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = 6039861993290427353ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (signed char)66;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 1959215985U : 2130386677U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (signed char)99 : (signed char)87;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
