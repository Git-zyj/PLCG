#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-68;
int var_2 = -1360717825;
int var_3 = 861967858;
unsigned long long int var_4 = 18209920353000315662ULL;
long long int var_5 = -1907734847256806024LL;
long long int var_8 = 3581262742457134973LL;
unsigned short var_9 = (unsigned short)20393;
int var_14 = -465582202;
int zero = 0;
signed char var_17 = (signed char)111;
unsigned int var_18 = 2321270508U;
signed char arr_0 [20] ;
long long int arr_2 [20] ;
long long int arr_3 [20] ;
unsigned char arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (signed char)126;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 8117737175882212316LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = -7700802685056922038LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (unsigned char)227;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
