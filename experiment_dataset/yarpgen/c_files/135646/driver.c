#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9705818965972657367ULL;
long long int var_2 = 9149528382009033230LL;
signed char var_4 = (signed char)-103;
short var_9 = (short)18831;
int zero = 0;
short var_12 = (short)-22765;
long long int var_13 = -6268596385163077731LL;
unsigned char var_14 = (unsigned char)33;
unsigned long long int var_15 = 7470571502298208952ULL;
unsigned short arr_1 [23] ;
long long int arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)53143 : (unsigned short)17972;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 8096154723061515330LL : -570077176470426601LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
