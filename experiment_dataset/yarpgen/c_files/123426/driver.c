#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)3;
signed char var_3 = (signed char)9;
signed char var_4 = (signed char)29;
unsigned char var_8 = (unsigned char)106;
int var_10 = -719852256;
unsigned long long int var_11 = 1098256536488097977ULL;
unsigned int var_13 = 218946693U;
int zero = 0;
int var_15 = 919786466;
short var_16 = (short)-25228;
short var_17 = (short)-4323;
unsigned char var_18 = (unsigned char)141;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
