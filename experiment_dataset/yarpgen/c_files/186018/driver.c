#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 237554854U;
unsigned char var_6 = (unsigned char)181;
_Bool var_7 = (_Bool)1;
unsigned int var_13 = 3400194252U;
unsigned char var_14 = (unsigned char)137;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 17453222743421941977ULL;
signed char var_18 = (signed char)99;
int zero = 0;
unsigned int var_19 = 2310673612U;
unsigned short var_20 = (unsigned short)53298;
unsigned char var_21 = (unsigned char)175;
unsigned char var_22 = (unsigned char)228;
_Bool var_23 = (_Bool)0;
void init() {
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
