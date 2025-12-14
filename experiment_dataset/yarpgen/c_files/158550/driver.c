#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)103;
unsigned short var_3 = (unsigned short)65037;
int var_7 = -1877750875;
short var_17 = (short)4285;
int zero = 0;
unsigned char var_19 = (unsigned char)51;
_Bool var_20 = (_Bool)1;
int var_21 = -750704133;
unsigned short var_22 = (unsigned short)38878;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
