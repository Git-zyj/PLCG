#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)207;
int var_1 = 85636227;
short var_3 = (short)-1324;
unsigned char var_4 = (unsigned char)235;
long long int var_5 = -6764540841586515281LL;
long long int var_6 = -3174548589744084808LL;
int var_8 = -2018094547;
unsigned char var_9 = (unsigned char)252;
int var_11 = 801518378;
int var_19 = 1282857916;
int zero = 0;
signed char var_20 = (signed char)95;
signed char var_21 = (signed char)-3;
signed char var_22 = (signed char)60;
long long int arr_5 [17] ;
signed char arr_9 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = -8981258966472392084LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)59 : (signed char)-62;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
