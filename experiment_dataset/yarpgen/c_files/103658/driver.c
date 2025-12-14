#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17470;
long long int var_1 = 7816343959888174560LL;
unsigned short var_2 = (unsigned short)7719;
long long int var_11 = -3624853455791337076LL;
int zero = 0;
unsigned long long int var_15 = 7308280657657281739ULL;
unsigned long long int var_16 = 17140699372080251760ULL;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-67;
long long int var_19 = -7518231945491865647LL;
short arr_0 [22] ;
long long int arr_1 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (short)18152;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = -8953613708763669132LL;
}

void checksum() {
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
