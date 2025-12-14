#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 231270028;
int var_3 = -403616430;
int var_4 = 1389504262;
int var_5 = 626366199;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)220;
int zero = 0;
short var_12 = (short)-26955;
unsigned int var_13 = 21743826U;
int var_14 = 482646602;
unsigned long long int var_15 = 9353445173753513381ULL;
long long int var_16 = -4865676540391234122LL;
unsigned short arr_2 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)63889;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
