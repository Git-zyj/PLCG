#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)68;
long long int var_1 = 7459771935823636746LL;
int var_4 = -65571336;
unsigned long long int var_5 = 6115398368400623901ULL;
short var_6 = (short)-29966;
short var_11 = (short)17240;
unsigned long long int var_12 = 3562137832746019306ULL;
unsigned char var_15 = (unsigned char)157;
long long int var_17 = -2250740104887271089LL;
int zero = 0;
unsigned long long int var_19 = 15874392854244943176ULL;
int var_20 = 1513247127;
short var_21 = (short)6639;
signed char var_22 = (signed char)-92;
unsigned long long int var_23 = 9430499864553485289ULL;
short var_24 = (short)-26553;
unsigned long long int arr_1 [25] ;
unsigned char arr_2 [25] ;
short arr_3 [25] ;
int arr_4 [25] [25] ;
long long int arr_5 [25] [25] ;
short arr_8 [25] [25] ;
signed char arr_9 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 9003125538576142586ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned char)146;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (short)-7389;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = -1762049158;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = 3502891873165251973LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = (short)-19962;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)23;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
