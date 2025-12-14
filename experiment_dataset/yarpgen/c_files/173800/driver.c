#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)163;
unsigned short var_10 = (unsigned short)42300;
unsigned short var_14 = (unsigned short)17019;
unsigned int var_15 = 3094025167U;
unsigned long long int var_18 = 1954788247579021467ULL;
int zero = 0;
unsigned long long int var_19 = 17093326873525258476ULL;
unsigned short var_20 = (unsigned short)2135;
unsigned long long int var_21 = 16871979871075630987ULL;
unsigned short var_22 = (unsigned short)6667;
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
