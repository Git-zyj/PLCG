#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)54;
long long int var_9 = -990804559107127185LL;
unsigned char var_14 = (unsigned char)110;
int zero = 0;
unsigned long long int var_15 = 686149706498337955ULL;
unsigned short var_16 = (unsigned short)27897;
unsigned char var_17 = (unsigned char)194;
unsigned short var_18 = (unsigned short)55246;
unsigned char var_19 = (unsigned char)129;
long long int var_20 = -4851064224879372691LL;
unsigned char arr_0 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)21;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
