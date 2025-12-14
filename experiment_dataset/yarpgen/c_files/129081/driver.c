#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2301897414U;
signed char var_6 = (signed char)-96;
short var_8 = (short)-15574;
unsigned short var_9 = (unsigned short)55867;
int zero = 0;
unsigned short var_12 = (unsigned short)38169;
unsigned char var_13 = (unsigned char)150;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
