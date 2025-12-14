#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13798987212841007273ULL;
short var_3 = (short)-3621;
short var_5 = (short)-4654;
short var_6 = (short)25642;
unsigned int var_9 = 54309573U;
unsigned long long int var_10 = 3346544606813443750ULL;
int var_11 = 1110123741;
int zero = 0;
short var_12 = (short)-4139;
long long int var_13 = -7586534692856059837LL;
int var_14 = -1101735286;
unsigned char arr_3 [20] ;
signed char arr_5 [20] ;
unsigned int arr_7 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)237 : (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (signed char)-62;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 196260348U : 1553713396U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
