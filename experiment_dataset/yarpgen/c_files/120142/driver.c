#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)46954;
unsigned short var_6 = (unsigned short)14726;
short var_9 = (short)15158;
unsigned int var_10 = 4273300996U;
int zero = 0;
unsigned int var_11 = 2530773271U;
signed char var_12 = (signed char)-100;
unsigned char var_13 = (unsigned char)213;
void init() {
}

void checksum() {
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
