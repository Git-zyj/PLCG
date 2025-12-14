#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-91;
unsigned long long int var_1 = 10092484126518194928ULL;
short var_4 = (short)-24803;
_Bool var_9 = (_Bool)0;
signed char var_13 = (signed char)121;
short var_14 = (short)-30154;
int zero = 0;
unsigned long long int var_19 = 3567714795216031572ULL;
unsigned short var_20 = (unsigned short)47596;
unsigned char var_21 = (unsigned char)228;
unsigned char var_22 = (unsigned char)70;
unsigned int var_23 = 3460889200U;
unsigned int arr_5 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 2480718252U : 182531418U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
