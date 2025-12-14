#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 640214175U;
unsigned char var_2 = (unsigned char)116;
unsigned char var_3 = (unsigned char)222;
_Bool var_8 = (_Bool)0;
int var_9 = -248655146;
_Bool var_11 = (_Bool)1;
signed char var_14 = (signed char)15;
unsigned char var_15 = (unsigned char)115;
signed char var_17 = (signed char)86;
unsigned char var_18 = (unsigned char)137;
unsigned int var_19 = 2266915835U;
int zero = 0;
signed char var_20 = (signed char)-110;
unsigned char var_21 = (unsigned char)35;
signed char var_22 = (signed char)94;
signed char var_23 = (signed char)68;
signed char var_24 = (signed char)-78;
unsigned char var_25 = (unsigned char)174;
unsigned char var_26 = (unsigned char)148;
unsigned long long int var_27 = 3340475966774407437ULL;
unsigned long long int var_28 = 305540355987868059ULL;
unsigned short arr_0 [10] [10] ;
_Bool arr_1 [10] [10] ;
signed char arr_2 [10] ;
unsigned long long int arr_4 [10] [10] [10] ;
unsigned long long int arr_5 [10] [10] [10] ;
int arr_6 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)10338;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (signed char)-118;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 9890390284139675829ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 6736846107791404420ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = -1066254273;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
