#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-80;
unsigned char var_2 = (unsigned char)121;
int var_3 = 585128586;
short var_5 = (short)23025;
unsigned short var_8 = (unsigned short)53612;
short var_10 = (short)8074;
signed char var_11 = (signed char)41;
int zero = 0;
int var_12 = -923533261;
signed char var_13 = (signed char)46;
int var_14 = 1768267066;
unsigned char arr_0 [17] ;
unsigned char arr_3 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned char)39;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)149;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
