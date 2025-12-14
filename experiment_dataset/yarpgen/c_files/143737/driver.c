#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)179;
unsigned short var_9 = (unsigned short)41645;
unsigned short var_10 = (unsigned short)767;
unsigned short var_14 = (unsigned short)12567;
unsigned short var_18 = (unsigned short)60564;
int zero = 0;
unsigned short var_20 = (unsigned short)46167;
unsigned short var_21 = (unsigned short)63759;
short var_22 = (short)733;
short var_23 = (short)14294;
short arr_0 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)32705 : (short)20818;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
