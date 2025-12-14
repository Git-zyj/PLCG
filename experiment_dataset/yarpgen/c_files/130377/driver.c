#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)206;
unsigned char var_3 = (unsigned char)33;
unsigned short var_5 = (unsigned short)13975;
unsigned short var_8 = (unsigned short)41279;
int var_10 = -1860887141;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 10115065042168857371ULL;
unsigned int var_13 = 1963004176U;
signed char var_14 = (signed char)-114;
int var_15 = 2051026703;
unsigned int arr_1 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 3995924896U;
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
