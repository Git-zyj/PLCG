#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10003589746027555536ULL;
unsigned long long int var_1 = 11140823694807089293ULL;
unsigned int var_2 = 3968540441U;
long long int var_3 = 5704726823063635048LL;
unsigned short var_4 = (unsigned short)29639;
unsigned long long int var_6 = 13353995157141675120ULL;
int var_8 = -20871802;
int zero = 0;
int var_10 = 1101555322;
unsigned char var_11 = (unsigned char)248;
unsigned long long int var_12 = 16704547005068642814ULL;
unsigned char var_13 = (unsigned char)86;
int arr_1 [10] ;
int arr_2 [10] ;
unsigned long long int arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1598482760 : 1337195726;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 269348302 : -432846996;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 17836095444291652781ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
