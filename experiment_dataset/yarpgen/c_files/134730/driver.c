#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12101;
_Bool var_1 = (_Bool)1;
int var_2 = 1489030862;
short var_3 = (short)-20364;
unsigned long long int var_6 = 6049033241073338484ULL;
unsigned short var_7 = (unsigned short)41487;
unsigned long long int var_8 = 10523060777062259492ULL;
unsigned long long int var_9 = 11176445820782823916ULL;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)60;
int var_12 = 859106784;
int var_13 = -2122866661;
int var_14 = 75506387;
signed char var_15 = (signed char)25;
unsigned char var_16 = (unsigned char)224;
int arr_0 [10] [10] ;
long long int arr_1 [10] [10] ;
long long int arr_3 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = -143442290;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 4813500748854799388LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = -942986206665972918LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
