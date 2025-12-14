#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)50342;
signed char var_3 = (signed char)44;
unsigned short var_4 = (unsigned short)48650;
signed char var_6 = (signed char)-67;
signed char var_7 = (signed char)-38;
unsigned long long int var_8 = 9380787022534491865ULL;
unsigned long long int var_10 = 8118103771735847655ULL;
unsigned long long int var_11 = 692448246298734721ULL;
unsigned short var_12 = (unsigned short)3096;
unsigned long long int var_13 = 2022957769634811744ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)7734;
signed char var_15 = (signed char)-62;
unsigned long long int var_16 = 16637198576108369141ULL;
signed char var_17 = (signed char)-80;
unsigned long long int var_18 = 12880601008430441804ULL;
unsigned long long int arr_0 [18] ;
signed char arr_2 [18] ;
unsigned int arr_3 [18] ;
unsigned long long int arr_4 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 8256583161665509863ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (signed char)-11;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 1725233627U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = 1025779851305868079ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
