#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)253;
unsigned char var_7 = (unsigned char)122;
int zero = 0;
unsigned short var_11 = (unsigned short)22997;
_Bool var_12 = (_Bool)1;
long long int var_13 = -1361602738318875484LL;
unsigned long long int var_14 = 313403787874081485ULL;
short var_15 = (short)-6440;
unsigned long long int arr_0 [16] [16] ;
unsigned long long int arr_1 [16] ;
signed char arr_4 [16] ;
short arr_6 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 4876465931524477879ULL : 15176374762939532165ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 8869245828827350477ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)89 : (signed char)-29;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (short)-26312;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
