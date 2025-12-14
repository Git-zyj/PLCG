#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11234;
unsigned short var_1 = (unsigned short)34414;
unsigned short var_4 = (unsigned short)37295;
short var_5 = (short)22018;
long long int var_6 = -3153390171126866954LL;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)21001;
short var_9 = (short)-10765;
int zero = 0;
unsigned char var_10 = (unsigned char)231;
short var_11 = (short)-1251;
unsigned int var_12 = 1760034785U;
short var_13 = (short)-25133;
short var_14 = (short)19044;
short var_15 = (short)12948;
long long int arr_1 [20] [20] ;
unsigned int arr_3 [20] ;
int arr_4 [20] ;
unsigned short arr_12 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 132561693364549774LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 3259757499U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = -1967219193;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned short)51347 : (unsigned short)5367;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
