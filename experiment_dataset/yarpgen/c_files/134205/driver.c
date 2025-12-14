#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)118;
short var_4 = (short)-13548;
unsigned short var_6 = (unsigned short)29600;
unsigned short var_8 = (unsigned short)13040;
signed char var_9 = (signed char)-58;
int var_13 = -919059943;
long long int var_14 = -7317589791625402011LL;
short var_15 = (short)-30786;
int zero = 0;
signed char var_18 = (signed char)-94;
long long int var_19 = 225540727855138004LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
