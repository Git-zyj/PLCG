#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)20926;
unsigned long long int var_4 = 1921243560497836523ULL;
unsigned long long int var_5 = 18040670255995053869ULL;
unsigned int var_9 = 228486404U;
int zero = 0;
int var_12 = -428597566;
unsigned short var_13 = (unsigned short)25053;
unsigned short var_14 = (unsigned short)60755;
int var_15 = -753505784;
_Bool var_16 = (_Bool)1;
long long int var_17 = -1146032461475881642LL;
unsigned short arr_0 [23] [23] ;
unsigned char arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)55087 : (unsigned short)49656;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)189 : (unsigned char)56;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
