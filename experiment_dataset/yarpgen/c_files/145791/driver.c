#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-31723;
short var_4 = (short)10828;
_Bool var_5 = (_Bool)0;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-123;
short var_11 = (short)-19162;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-53;
int zero = 0;
unsigned int var_16 = 4294900780U;
short var_17 = (short)-8060;
unsigned long long int var_18 = 5575324381488127688ULL;
long long int var_19 = -2520268636154230870LL;
unsigned int var_20 = 1271442644U;
short var_21 = (short)14133;
int var_22 = 882414085;
signed char var_23 = (signed char)117;
unsigned short arr_1 [21] ;
signed char arr_2 [21] ;
int arr_3 [21] [21] ;
unsigned short arr_10 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)31816;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (signed char)95;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 911352694 : 1471875380;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)46192 : (unsigned short)43181;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
