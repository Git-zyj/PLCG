#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2452991377590145988LL;
short var_2 = (short)9299;
_Bool var_3 = (_Bool)1;
unsigned short var_5 = (unsigned short)15978;
_Bool var_11 = (_Bool)1;
int var_14 = -1678368733;
int zero = 0;
unsigned short var_18 = (unsigned short)56107;
unsigned short var_19 = (unsigned short)7267;
unsigned char arr_2 [19] [19] ;
int arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)60;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 1335739313;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
