#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)207;
unsigned int var_6 = 4053392274U;
signed char var_9 = (signed char)46;
unsigned short var_11 = (unsigned short)30295;
_Bool var_13 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)1;
int var_21 = -1100827658;
void init() {
}

void checksum() {
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
