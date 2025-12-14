#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -610722994987330481LL;
short var_8 = (short)-26669;
unsigned short var_11 = (unsigned short)6425;
signed char var_12 = (signed char)117;
unsigned char var_13 = (unsigned char)205;
int zero = 0;
short var_14 = (short)-7689;
unsigned short var_15 = (unsigned short)34160;
unsigned short var_16 = (unsigned short)19848;
long long int var_17 = -757203111424634662LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
