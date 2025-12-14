#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9557707724959713078ULL;
unsigned int var_1 = 1163857445U;
unsigned short var_9 = (unsigned short)59449;
signed char var_10 = (signed char)19;
unsigned long long int var_12 = 605396828337685705ULL;
int zero = 0;
unsigned int var_19 = 1228023543U;
unsigned char var_20 = (unsigned char)123;
unsigned int var_21 = 1238533521U;
unsigned int var_22 = 1542198275U;
unsigned int var_23 = 301820990U;
unsigned int arr_0 [21] [21] ;
unsigned int arr_5 [21] ;
unsigned int arr_8 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 3300001524U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = 3202356193U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2367720220U : 1332305048U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
