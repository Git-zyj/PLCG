#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6982537953448743652LL;
long long int var_3 = -6382887446357025696LL;
long long int var_4 = 4210553215044986611LL;
unsigned int var_6 = 3926383895U;
unsigned int var_13 = 2099665662U;
long long int var_17 = 1247675100247731601LL;
int zero = 0;
signed char var_19 = (signed char)-115;
signed char var_20 = (signed char)23;
long long int var_21 = -4355218945320108635LL;
_Bool arr_0 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
