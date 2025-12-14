#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6219;
signed char var_1 = (signed char)-63;
_Bool var_2 = (_Bool)0;
signed char var_5 = (signed char)2;
unsigned char var_7 = (unsigned char)195;
signed char var_9 = (signed char)100;
short var_11 = (short)-6366;
int zero = 0;
int var_14 = -1555584255;
signed char var_15 = (signed char)-50;
_Bool var_16 = (_Bool)0;
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
