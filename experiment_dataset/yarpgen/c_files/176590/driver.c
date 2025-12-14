#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10388;
int var_1 = -400246984;
_Bool var_2 = (_Bool)0;
unsigned char var_4 = (unsigned char)59;
unsigned char var_5 = (unsigned char)72;
short var_8 = (short)-7284;
unsigned char var_9 = (unsigned char)198;
unsigned char var_11 = (unsigned char)124;
long long int var_13 = 7203532072277403978LL;
int zero = 0;
signed char var_16 = (signed char)-116;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
