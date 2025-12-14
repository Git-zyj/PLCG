#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-44;
long long int var_4 = -2002345832482445779LL;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
long long int var_8 = 5942753680533265688LL;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)101;
long long int var_13 = -4618109936357651902LL;
unsigned short var_14 = (unsigned short)36132;
int zero = 0;
int var_15 = 1500929950;
signed char var_16 = (signed char)-43;
int var_17 = -1815681666;
unsigned int var_18 = 2745203586U;
int var_19 = -2029873744;
short arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)4743;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
