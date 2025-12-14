#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3216625189U;
short var_3 = (short)1787;
short var_4 = (short)28281;
unsigned char var_6 = (unsigned char)106;
unsigned int var_8 = 1997333539U;
short var_13 = (short)-4451;
int zero = 0;
unsigned short var_14 = (unsigned short)40051;
unsigned char var_15 = (unsigned char)23;
signed char var_16 = (signed char)-109;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
