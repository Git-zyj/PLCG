#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12155109408318133251ULL;
unsigned char var_2 = (unsigned char)35;
unsigned char var_3 = (unsigned char)242;
signed char var_4 = (signed char)-33;
unsigned long long int var_5 = 16255969962684080148ULL;
unsigned short var_7 = (unsigned short)30813;
unsigned short var_8 = (unsigned short)53844;
unsigned short var_9 = (unsigned short)64106;
unsigned long long int var_11 = 3413965866043038534ULL;
int zero = 0;
long long int var_18 = 2137090265828504175LL;
unsigned int var_19 = 4048134276U;
int var_20 = -1581249140;
unsigned long long int var_21 = 14203967496412465858ULL;
signed char var_22 = (signed char)-49;
short var_23 = (short)19403;
unsigned int var_24 = 57295942U;
unsigned short var_25 = (unsigned short)50750;
short var_26 = (short)23138;
signed char arr_1 [18] [18] ;
unsigned long long int arr_5 [18] [18] [18] ;
unsigned short arr_9 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-100;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 9058439790869631439ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned short)26928;
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
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
