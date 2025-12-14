#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_10 = (unsigned short)62152;
short var_11 = (short)-23491;
int var_12 = -1891968313;
int zero = 0;
unsigned char var_19 = (unsigned char)26;
unsigned long long int var_20 = 16749313500347436253ULL;
unsigned long long int var_21 = 9074864906655571889ULL;
void init() {
}

void checksum() {
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
