#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-62;
signed char var_1 = (signed char)25;
unsigned int var_2 = 992600237U;
unsigned long long int var_3 = 15422580807829954045ULL;
unsigned char var_4 = (unsigned char)113;
long long int var_5 = 6037013015403839863LL;
unsigned short var_6 = (unsigned short)712;
unsigned long long int var_7 = 1986342967946211471ULL;
unsigned char var_8 = (unsigned char)119;
unsigned long long int var_9 = 5865575993088815135ULL;
unsigned char var_12 = (unsigned char)48;
signed char var_13 = (signed char)92;
unsigned int var_17 = 1197370327U;
int zero = 0;
unsigned char var_18 = (unsigned char)231;
unsigned short var_19 = (unsigned short)12557;
unsigned short var_20 = (unsigned short)8697;
short var_21 = (short)30106;
signed char var_22 = (signed char)9;
unsigned char var_23 = (unsigned char)25;
signed char var_24 = (signed char)-46;
unsigned long long int var_25 = 15413257291307587575ULL;
long long int arr_0 [10] ;
unsigned short arr_1 [10] [10] ;
unsigned long long int arr_2 [10] ;
signed char arr_3 [10] ;
short arr_4 [10] [10] [10] [10] ;
unsigned long long int arr_6 [10] [10] [10] [10] ;
unsigned int arr_8 [10] [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 4322679623129167547LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)42268;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 6115977609269377951ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (signed char)58;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (short)30952;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 15242833514178356594ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = 3843119958U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
