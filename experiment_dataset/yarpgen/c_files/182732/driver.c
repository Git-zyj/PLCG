#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4848028140805495823LL;
long long int var_3 = 1718809130537448995LL;
unsigned char var_4 = (unsigned char)10;
unsigned int var_6 = 2266487212U;
unsigned int var_9 = 3706734334U;
unsigned int var_10 = 468935448U;
int zero = 0;
long long int var_13 = -3598694235798566812LL;
long long int var_14 = 2303583839221008394LL;
unsigned char var_15 = (unsigned char)202;
signed char var_16 = (signed char)48;
long long int var_17 = -4349598080736283796LL;
unsigned int arr_0 [24] ;
long long int arr_1 [24] ;
long long int arr_4 [23] [23] ;
unsigned char arr_2 [24] [24] ;
unsigned char arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 559326169U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -608979873612413810LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = -1127000637288213153LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)60;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned char)159;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
