#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4595964565073003291ULL;
unsigned short var_5 = (unsigned short)46718;
short var_6 = (short)20825;
unsigned long long int var_8 = 10904414272293189547ULL;
int var_9 = -1671674010;
int zero = 0;
unsigned short var_10 = (unsigned short)31852;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)703;
int var_13 = -999782282;
signed char arr_0 [25] [25] ;
short arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-3;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (short)-31780;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
