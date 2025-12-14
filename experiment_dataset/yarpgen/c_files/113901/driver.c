#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7649673713468773860ULL;
long long int var_2 = -5912823589758566439LL;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 935542046U;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)206;
signed char var_24 = (signed char)-4;
signed char arr_1 [17] ;
unsigned char arr_5 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)-80;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (unsigned char)78;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
