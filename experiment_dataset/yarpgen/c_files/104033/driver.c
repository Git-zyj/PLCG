#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1335692069U;
signed char var_9 = (signed char)-65;
int zero = 0;
signed char var_10 = (signed char)94;
unsigned int var_11 = 2140537980U;
unsigned short var_12 = (unsigned short)42444;
signed char var_13 = (signed char)119;
long long int var_14 = 5474597152697591730LL;
unsigned short var_15 = (unsigned short)33037;
unsigned short var_16 = (unsigned short)31138;
unsigned int var_17 = 2502982025U;
unsigned int var_18 = 3959411564U;
unsigned short var_19 = (unsigned short)57807;
signed char var_20 = (signed char)41;
signed char var_21 = (signed char)-26;
long long int var_22 = -9022784533379678230LL;
unsigned short var_23 = (unsigned short)52669;
signed char var_24 = (signed char)26;
unsigned int arr_0 [23] ;
signed char arr_1 [23] ;
long long int arr_2 [23] [23] ;
unsigned short arr_3 [20] ;
long long int arr_4 [20] [20] ;
long long int arr_5 [12] [12] ;
long long int arr_6 [12] ;
signed char arr_8 [12] [12] ;
unsigned int arr_10 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 3476787461U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (signed char)50;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = 3262550902103397879LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned short)11390;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 3026538105722446601LL : 1166235026218467915LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = 5991257317200451858LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = 2641287368481960832LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)86;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = 3837808052U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
