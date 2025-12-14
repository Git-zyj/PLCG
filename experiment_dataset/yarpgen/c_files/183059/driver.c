#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-81;
unsigned char var_3 = (unsigned char)157;
long long int var_5 = -8208619757631554065LL;
unsigned int var_6 = 4128495063U;
unsigned char var_9 = (unsigned char)217;
int zero = 0;
unsigned short var_17 = (unsigned short)55356;
signed char var_18 = (signed char)77;
unsigned long long int var_19 = 9464629112899184055ULL;
int var_20 = 1637519140;
signed char arr_0 [24] ;
signed char arr_1 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (signed char)69;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)91;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
