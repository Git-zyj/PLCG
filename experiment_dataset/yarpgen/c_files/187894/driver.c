#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20301;
unsigned long long int var_1 = 17703467591482756155ULL;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)203;
unsigned char var_17 = (unsigned char)111;
int zero = 0;
signed char var_20 = (signed char)63;
unsigned int var_21 = 2472002773U;
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
