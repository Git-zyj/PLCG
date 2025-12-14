#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40591;
unsigned char var_3 = (unsigned char)87;
unsigned char var_9 = (unsigned char)248;
unsigned char var_16 = (unsigned char)92;
int zero = 0;
unsigned char var_19 = (unsigned char)32;
unsigned short var_20 = (unsigned short)20616;
unsigned short var_21 = (unsigned short)29866;
unsigned short var_22 = (unsigned short)54638;
unsigned char var_23 = (unsigned char)174;
unsigned char arr_0 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)135;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
