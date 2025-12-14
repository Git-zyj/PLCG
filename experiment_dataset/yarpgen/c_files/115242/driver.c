#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)108;
unsigned char var_2 = (unsigned char)67;
unsigned int var_3 = 874806727U;
long long int var_4 = -8573629273732645115LL;
unsigned char var_5 = (unsigned char)188;
unsigned int var_6 = 1961795852U;
unsigned int var_7 = 4053599624U;
unsigned int var_10 = 3538158231U;
signed char var_11 = (signed char)-96;
short var_12 = (short)8977;
int zero = 0;
unsigned char var_19 = (unsigned char)61;
unsigned char var_20 = (unsigned char)244;
unsigned long long int var_21 = 10481897462728250164ULL;
unsigned int var_22 = 1676446028U;
unsigned char var_23 = (unsigned char)105;
unsigned int var_24 = 791096027U;
short arr_1 [23] [23] ;
unsigned int arr_2 [23] ;
short arr_3 [23] [23] ;
long long int arr_4 [23] [23] [23] ;
signed char arr_5 [23] ;
signed char arr_6 [23] [23] [23] ;
int arr_7 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-27109;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2489649988U : 3098087873U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (short)11732;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -907874072231749827LL : -4930383468506865342LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)117 : (signed char)74;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)-72;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 1811196164 : 24733689;
}

void checksum() {
    hash(&seed, var_19);
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
