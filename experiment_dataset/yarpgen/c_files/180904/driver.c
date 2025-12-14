#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)9701;
unsigned char var_8 = (unsigned char)250;
signed char var_12 = (signed char)77;
long long int var_15 = -2527876051297391345LL;
int zero = 0;
short var_16 = (short)-25413;
signed char var_17 = (signed char)-85;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)78;
unsigned short var_20 = (unsigned short)31107;
unsigned long long int var_21 = 2337249013342756788ULL;
unsigned short var_22 = (unsigned short)20234;
unsigned short arr_0 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)49117 : (unsigned short)61369;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
