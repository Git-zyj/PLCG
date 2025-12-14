#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)194;
unsigned long long int var_1 = 7569638376968231702ULL;
long long int var_2 = 3758425865182745267LL;
short var_4 = (short)20596;
unsigned long long int var_5 = 1571127936512326667ULL;
unsigned char var_7 = (unsigned char)232;
int zero = 0;
short var_10 = (short)4445;
signed char var_11 = (signed char)-59;
unsigned long long int var_12 = 6089855210093300846ULL;
long long int var_13 = -1478790191908921551LL;
unsigned long long int arr_1 [10] ;
unsigned int arr_3 [10] [10] ;
unsigned int arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 4610218349087880141ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 3877824027U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = 1625042962U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
