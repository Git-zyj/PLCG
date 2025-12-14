#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_3 = 6379720294514322982LL;
_Bool var_4 = (_Bool)1;
signed char var_8 = (signed char)-7;
signed char var_9 = (signed char)109;
unsigned char var_11 = (unsigned char)23;
unsigned long long int var_13 = 9286386166632768666ULL;
signed char var_14 = (signed char)6;
unsigned long long int var_15 = 387788003728024913ULL;
int zero = 0;
unsigned long long int var_17 = 7440611429225374784ULL;
unsigned long long int var_18 = 1074061824926761052ULL;
unsigned short var_19 = (unsigned short)41392;
unsigned char var_20 = (unsigned char)189;
short var_21 = (short)8676;
long long int var_22 = 6446562300183998085LL;
_Bool var_23 = (_Bool)0;
short var_24 = (short)-23216;
_Bool arr_1 [12] ;
long long int arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = -126392047743773328LL;
}

void checksum() {
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
