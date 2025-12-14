#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2938;
long long int var_1 = 4372998969782301567LL;
unsigned short var_4 = (unsigned short)55928;
signed char var_5 = (signed char)-123;
long long int var_6 = -5631187933830183325LL;
long long int var_7 = 1208216711728491155LL;
long long int var_8 = 90633292351170045LL;
unsigned char var_9 = (unsigned char)68;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)57555;
int zero = 0;
unsigned char var_13 = (unsigned char)188;
int var_14 = 483416442;
unsigned short var_15 = (unsigned short)54065;
unsigned int var_16 = 2038844283U;
unsigned char var_17 = (unsigned char)3;
unsigned int var_18 = 3642483094U;
_Bool arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
