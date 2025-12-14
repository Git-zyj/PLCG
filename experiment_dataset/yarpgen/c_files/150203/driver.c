#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11263;
unsigned char var_4 = (unsigned char)212;
signed char var_5 = (signed char)-67;
unsigned short var_6 = (unsigned short)44676;
unsigned char var_8 = (unsigned char)84;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)102;
unsigned short var_12 = (unsigned short)1047;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
