#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2896803294630954820LL;
unsigned short var_2 = (unsigned short)12892;
unsigned int var_5 = 585116410U;
_Bool var_6 = (_Bool)0;
unsigned long long int var_9 = 18194758041460440595ULL;
long long int var_10 = -3152653453941933234LL;
int zero = 0;
signed char var_11 = (signed char)110;
unsigned int var_12 = 3238932115U;
unsigned int var_13 = 2877051398U;
unsigned short var_14 = (unsigned short)14318;
long long int var_15 = -3702305294640141627LL;
signed char var_16 = (signed char)-4;
unsigned short arr_0 [18] [18] ;
int arr_1 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)46544;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -1791014459 : -582809450;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
