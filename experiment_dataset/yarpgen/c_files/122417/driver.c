#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)185;
unsigned short var_11 = (unsigned short)59442;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 4831037480849917186ULL;
unsigned char var_19 = (unsigned char)146;
unsigned char var_20 = (unsigned char)181;
unsigned long long int arr_1 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 10372562513805094132ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
