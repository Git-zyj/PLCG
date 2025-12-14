#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1138960485;
unsigned int var_2 = 2363480156U;
unsigned long long int var_3 = 18300409678983196950ULL;
unsigned int var_6 = 512669504U;
signed char var_8 = (signed char)-53;
int zero = 0;
unsigned int var_10 = 1340630755U;
unsigned short var_11 = (unsigned short)54110;
unsigned long long int var_12 = 4467798337546616958ULL;
unsigned long long int var_13 = 2245248172510837671ULL;
short var_14 = (short)-10538;
unsigned int var_15 = 163437879U;
unsigned int var_16 = 2961739161U;
signed char var_17 = (signed char)-120;
unsigned int var_18 = 2739979788U;
unsigned short var_19 = (unsigned short)33972;
unsigned char var_20 = (unsigned char)106;
short arr_1 [22] ;
unsigned long long int arr_2 [22] [22] ;
int arr_8 [17] ;
unsigned long long int arr_9 [17] ;
unsigned short arr_10 [17] ;
short arr_3 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)17967;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 1500409596365004812ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = -2068580042;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 7729263663269958556ULL : 9351778830759537187ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned short)13361 : (unsigned short)31344;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (short)23031;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
