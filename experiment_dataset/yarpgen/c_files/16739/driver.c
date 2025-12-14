#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 967966137652481419ULL;
unsigned int var_1 = 2109277688U;
signed char var_4 = (signed char)-102;
unsigned short var_5 = (unsigned short)54892;
_Bool var_7 = (_Bool)0;
unsigned long long int var_11 = 4013872200571229895ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 5128054409524295648ULL;
unsigned char var_15 = (unsigned char)95;
int arr_0 [17] ;
unsigned long long int arr_1 [17] ;
unsigned char arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = -1277320782;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 2677825291409108848ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned char)9;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
