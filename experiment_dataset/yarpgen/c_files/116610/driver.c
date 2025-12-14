#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -341386812833060374LL;
int var_3 = 1808837948;
unsigned int var_4 = 3087373686U;
long long int var_5 = 5565548131604118164LL;
signed char var_6 = (signed char)-84;
unsigned int var_7 = 2498224228U;
unsigned short var_9 = (unsigned short)27917;
_Bool var_10 = (_Bool)0;
unsigned int var_15 = 1290282049U;
long long int var_16 = 8791231977062354254LL;
int zero = 0;
int var_17 = -1523348263;
unsigned char var_18 = (unsigned char)48;
unsigned int var_19 = 947025033U;
short arr_0 [10] ;
short arr_2 [10] [10] ;
long long int arr_3 [10] ;
long long int arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (short)25703;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (short)18635;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = -3464032029465807526LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = -2346679622868060767LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
