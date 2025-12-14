#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4609573497485505844LL;
signed char var_3 = (signed char)-122;
unsigned short var_4 = (unsigned short)39322;
unsigned short var_6 = (unsigned short)34154;
int zero = 0;
int var_12 = -1366354197;
long long int var_13 = 6100976823088175061LL;
long long int var_14 = 1407381218380436622LL;
unsigned long long int var_15 = 11642065585321021695ULL;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1544882861U;
int var_18 = 1097039980;
signed char var_19 = (signed char)114;
int arr_0 [21] ;
unsigned char arr_1 [21] [21] ;
unsigned long long int arr_3 [21] ;
int arr_5 [21] [21] ;
signed char arr_6 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = -392139229;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)23;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 847954344078484604ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = -1987987947;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)6;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
