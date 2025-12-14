#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)60038;
unsigned char var_2 = (unsigned char)95;
signed char var_5 = (signed char)-91;
unsigned char var_9 = (unsigned char)193;
unsigned int var_17 = 910554756U;
short var_18 = (short)-4312;
int zero = 0;
unsigned int var_20 = 2327464401U;
unsigned short var_21 = (unsigned short)16695;
short var_22 = (short)25276;
unsigned long long int arr_1 [21] [21] ;
unsigned long long int arr_3 [21] ;
unsigned long long int arr_4 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 18184601987132514831ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 16761587973284360878ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 11901156441438257838ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
