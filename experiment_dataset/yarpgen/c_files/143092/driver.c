#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-96;
unsigned int var_7 = 1934041657U;
long long int var_10 = -8774687788673481380LL;
short var_13 = (short)17773;
unsigned long long int var_14 = 12057140953163907208ULL;
unsigned int var_15 = 2329248787U;
int zero = 0;
unsigned short var_19 = (unsigned short)29017;
signed char var_20 = (signed char)107;
int var_21 = -872508633;
signed char var_22 = (signed char)93;
unsigned short var_23 = (unsigned short)5489;
unsigned int arr_1 [11] ;
unsigned char arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 985852044U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned char)148;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
