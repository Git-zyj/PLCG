#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)30780;
unsigned short var_5 = (unsigned short)7425;
short var_7 = (short)30670;
unsigned char var_8 = (unsigned char)98;
unsigned long long int var_9 = 14253595306521625449ULL;
unsigned int var_10 = 1179654000U;
unsigned long long int var_11 = 13314954435335585664ULL;
unsigned long long int var_12 = 2281832440442766072ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 1123327784687244291ULL;
unsigned short arr_1 [22] ;
long long int arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)34858 : (unsigned short)25555;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 183121573304796777LL : 4476438468470095535LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
