#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)65;
unsigned long long int var_2 = 10036655774005982230ULL;
unsigned char var_4 = (unsigned char)215;
unsigned int var_5 = 1445434403U;
signed char var_6 = (signed char)39;
unsigned long long int var_8 = 13522433323996328913ULL;
_Bool var_9 = (_Bool)0;
int zero = 0;
int var_10 = 1096339278;
unsigned char var_11 = (unsigned char)90;
unsigned int var_12 = 2312208636U;
unsigned char var_13 = (unsigned char)80;
short var_14 = (short)8353;
unsigned long long int var_15 = 16621332316235968497ULL;
short var_16 = (short)-6004;
unsigned char var_17 = (unsigned char)80;
unsigned char arr_0 [20] [20] ;
unsigned int arr_1 [20] ;
signed char arr_2 [20] [20] [20] ;
unsigned char arr_3 [20] ;
_Bool arr_8 [20] [20] [20] [20] ;
long long int arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)123;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 1585770357U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-83 : (signed char)33;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)153 : (unsigned char)154;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -2382107049953153004LL : -7721117547097739591LL;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
