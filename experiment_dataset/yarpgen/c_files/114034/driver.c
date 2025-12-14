#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19476;
short var_1 = (short)-26622;
long long int var_2 = 1065579808113077498LL;
signed char var_3 = (signed char)-54;
unsigned long long int var_7 = 4100546545897482203ULL;
int var_9 = 1813870128;
unsigned long long int var_13 = 15986700102680479506ULL;
int zero = 0;
signed char var_14 = (signed char)48;
signed char var_15 = (signed char)111;
unsigned char var_16 = (unsigned char)156;
short var_17 = (short)-14435;
long long int var_18 = -9103905531767024130LL;
long long int var_19 = 5362830367975123516LL;
long long int arr_0 [18] [18] ;
unsigned int arr_1 [18] [18] ;
unsigned char arr_2 [18] ;
signed char arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 3169265888790294706LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 2729839071U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (signed char)13;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
