#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25395;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)98;
signed char var_6 = (signed char)-79;
signed char var_7 = (signed char)-115;
unsigned char var_8 = (unsigned char)24;
signed char var_9 = (signed char)23;
int zero = 0;
short var_10 = (short)-22926;
unsigned int var_11 = 2933474008U;
short var_12 = (short)5267;
unsigned char var_13 = (unsigned char)144;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
