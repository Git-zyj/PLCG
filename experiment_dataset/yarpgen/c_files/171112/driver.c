#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54685;
unsigned char var_2 = (unsigned char)49;
signed char var_3 = (signed char)-88;
int var_8 = -1936371580;
unsigned short var_10 = (unsigned short)7031;
long long int var_11 = 4732946634083294792LL;
int zero = 0;
unsigned char var_12 = (unsigned char)188;
signed char var_13 = (signed char)-55;
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
