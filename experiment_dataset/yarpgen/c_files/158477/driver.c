#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7425751834958221858ULL;
unsigned char var_3 = (unsigned char)21;
unsigned char var_5 = (unsigned char)121;
signed char var_7 = (signed char)-94;
long long int var_8 = 6537667374731646200LL;
short var_9 = (short)-18873;
int zero = 0;
unsigned short var_11 = (unsigned short)5973;
unsigned char var_12 = (unsigned char)235;
unsigned short var_13 = (unsigned short)62117;
unsigned long long int var_14 = 12419081423934114930ULL;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 6567025923525167629ULL;
short arr_1 [10] ;
long long int arr_2 [10] [10] ;
unsigned char arr_4 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)-5958;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 2110799279841157954LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)223;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
