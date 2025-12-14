#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 962752002084075214LL;
long long int var_1 = 6481759881279001900LL;
long long int var_2 = 9067161621966928725LL;
unsigned short var_3 = (unsigned short)10934;
unsigned short var_5 = (unsigned short)28154;
unsigned short var_8 = (unsigned short)62003;
unsigned short var_9 = (unsigned short)13598;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_11 = 4345278998479462992LL;
unsigned short var_12 = (unsigned short)1337;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
long long int arr_0 [22] ;
long long int arr_1 [22] ;
unsigned short arr_5 [22] [22] ;
unsigned short arr_9 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 9183670112688434310LL : 6426814618333285973LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 2794247481203804684LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)7684;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)36716 : (unsigned short)53851;
}

void checksum() {
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
