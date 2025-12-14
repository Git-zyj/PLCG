#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)201;
signed char var_9 = (signed char)-10;
unsigned char var_12 = (unsigned char)117;
unsigned char var_13 = (unsigned char)16;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = 340529438;
short var_19 = (short)-17992;
unsigned short var_20 = (unsigned short)12814;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
