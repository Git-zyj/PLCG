#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3740368462374471612LL;
long long int var_5 = 5599719241900957764LL;
long long int var_6 = -1714231474123603854LL;
unsigned short var_7 = (unsigned short)48073;
long long int var_8 = 176457258991394336LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_10 = 9198136167804617854LL;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
long long int var_13 = -1159890396019206856LL;
unsigned short var_14 = (unsigned short)5833;
unsigned char arr_2 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)61 : (unsigned char)19;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
