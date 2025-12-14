#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11820;
unsigned short var_2 = (unsigned short)37835;
signed char var_3 = (signed char)-24;
unsigned short var_4 = (unsigned short)2605;
unsigned int var_5 = 1460541956U;
int zero = 0;
long long int var_13 = 3983267770798129059LL;
long long int var_14 = -2366212780456296577LL;
unsigned short var_15 = (unsigned short)46947;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
unsigned char arr_1 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned char)190;
}

void checksum() {
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
