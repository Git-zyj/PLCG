#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35797;
short var_1 = (short)-20316;
unsigned long long int var_2 = 13624477105285469625ULL;
short var_4 = (short)3132;
short var_8 = (short)-8975;
unsigned long long int var_9 = 8209655831409648431ULL;
int zero = 0;
short var_11 = (short)-2011;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
short var_14 = (short)18135;
short arr_9 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)23341 : (short)24856;
}

void checksum() {
    hash(&seed, var_11);
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
