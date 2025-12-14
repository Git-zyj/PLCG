#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1784567575U;
unsigned short var_2 = (unsigned short)16309;
unsigned char var_4 = (unsigned char)206;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)3939;
int var_9 = 1180280968;
signed char var_11 = (signed char)62;
int zero = 0;
int var_12 = 41503586;
unsigned short var_13 = (unsigned short)2723;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
