#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1702564927842194354LL;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)116;
long long int var_6 = 5307949160187882682LL;
short var_7 = (short)-11374;
unsigned long long int var_8 = 11637318715148439857ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)26205;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 6533769929672741101ULL;
unsigned char var_17 = (unsigned char)252;
unsigned char arr_0 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned char)187;
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
