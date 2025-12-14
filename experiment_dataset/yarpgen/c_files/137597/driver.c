#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-6707;
unsigned long long int var_4 = 10202042900089543133ULL;
unsigned short var_6 = (unsigned short)40366;
unsigned char var_7 = (unsigned char)125;
short var_9 = (short)-23005;
unsigned int var_10 = 379041209U;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned short var_19 = (unsigned short)19805;
signed char var_20 = (signed char)110;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
