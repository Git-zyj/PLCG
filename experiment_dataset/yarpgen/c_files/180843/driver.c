#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8963;
signed char var_1 = (signed char)-50;
signed char var_3 = (signed char)-3;
unsigned int var_5 = 793410086U;
unsigned short var_7 = (unsigned short)21338;
int var_8 = 1366101297;
unsigned short var_9 = (unsigned short)20905;
int zero = 0;
unsigned char var_10 = (unsigned char)211;
unsigned char var_11 = (unsigned char)138;
int var_12 = 1460637022;
unsigned short var_13 = (unsigned short)5703;
signed char var_14 = (signed char)57;
unsigned char var_15 = (unsigned char)61;
unsigned long long int arr_1 [20] ;
short arr_2 [20] [20] ;
signed char arr_3 [20] ;
int arr_4 [20] ;
unsigned long long int arr_5 [20] [20] [20] ;
unsigned long long int arr_6 [20] ;
unsigned int arr_7 [20] ;
int arr_8 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 8138074557261796824ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-26837;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (signed char)94;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = -603827000;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 9742009685907658333ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = 5426644121078006049ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = 1658479329U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = 825117351;
}

void checksum() {
    hash(&seed, var_10);
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
