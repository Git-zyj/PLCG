#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-31263;
unsigned char var_6 = (unsigned char)145;
unsigned short var_7 = (unsigned short)38153;
unsigned short var_9 = (unsigned short)58637;
short var_10 = (short)-18510;
short var_11 = (short)-7312;
int zero = 0;
unsigned short var_12 = (unsigned short)19528;
_Bool var_13 = (_Bool)0;
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
