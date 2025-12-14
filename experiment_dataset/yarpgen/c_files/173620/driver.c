#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10166634647384643472ULL;
unsigned short var_3 = (unsigned short)49348;
unsigned short var_7 = (unsigned short)24009;
unsigned long long int var_8 = 16942290659534475846ULL;
_Bool var_10 = (_Bool)0;
long long int var_14 = 5935082214460486457LL;
long long int var_17 = -4135805063474197037LL;
int zero = 0;
unsigned short var_18 = (unsigned short)2684;
unsigned int var_19 = 1957172736U;
unsigned long long int var_20 = 17437531204168397239ULL;
unsigned long long int arr_0 [16] [16] ;
unsigned long long int arr_1 [16] ;
unsigned short arr_6 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 7030665512330591967ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 4038027575987734878ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (unsigned short)36230;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
