#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62520;
unsigned char var_1 = (unsigned char)252;
short var_2 = (short)-16182;
short var_3 = (short)15574;
unsigned short var_5 = (unsigned short)31879;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 4266001136U;
int zero = 0;
short var_10 = (short)27986;
short var_11 = (short)-29939;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
