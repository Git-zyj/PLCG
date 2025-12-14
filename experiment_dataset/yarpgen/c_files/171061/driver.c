#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)23556;
int var_3 = -216824905;
long long int var_4 = 4547321419254735177LL;
long long int var_5 = -7703476627919340011LL;
unsigned int var_7 = 3743469426U;
long long int var_9 = 2331366279763441182LL;
unsigned char var_11 = (unsigned char)213;
int zero = 0;
unsigned char var_12 = (unsigned char)160;
unsigned char var_13 = (unsigned char)188;
unsigned int var_14 = 853107409U;
unsigned int var_15 = 4210641560U;
short var_16 = (short)21893;
long long int arr_0 [15] ;
unsigned short arr_1 [15] ;
_Bool arr_2 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = -7334408466513101751LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)55220;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
