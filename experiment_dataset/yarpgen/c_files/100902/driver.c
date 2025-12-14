#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-92;
_Bool var_2 = (_Bool)1;
unsigned short var_6 = (unsigned short)62410;
unsigned short var_7 = (unsigned short)57695;
unsigned char var_8 = (unsigned char)164;
int zero = 0;
signed char var_18 = (signed char)99;
unsigned short var_19 = (unsigned short)38885;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
