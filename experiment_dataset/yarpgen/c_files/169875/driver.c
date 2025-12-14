#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16582;
unsigned long long int var_1 = 691276220003811256ULL;
_Bool var_2 = (_Bool)1;
unsigned int var_9 = 354006972U;
short var_12 = (short)-7573;
unsigned char var_14 = (unsigned char)106;
int zero = 0;
unsigned short var_18 = (unsigned short)23120;
unsigned char var_19 = (unsigned char)139;
short var_20 = (short)-1953;
unsigned char var_21 = (unsigned char)177;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
