#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1589389396U;
unsigned long long int var_3 = 3202148514349814707ULL;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-127;
unsigned long long int var_7 = 143491671556554479ULL;
unsigned long long int var_9 = 6896788003470967182ULL;
long long int var_10 = 2213744313025427561LL;
int zero = 0;
unsigned int var_11 = 300196688U;
unsigned int var_12 = 2392508651U;
short var_13 = (short)25619;
signed char var_14 = (signed char)-76;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)189;
int var_18 = -828896434;
unsigned long long int var_19 = 14947806156023977328ULL;
long long int arr_0 [23] [23] ;
unsigned short arr_4 [23] [23] ;
unsigned long long int arr_5 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 1965601069812543679LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)1149;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = 10728366668773791790ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
