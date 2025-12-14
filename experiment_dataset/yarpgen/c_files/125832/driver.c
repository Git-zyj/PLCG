#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1966079782;
signed char var_3 = (signed char)19;
short var_8 = (short)9413;
long long int var_11 = 5002689949523742273LL;
int var_14 = -1427414554;
unsigned char var_15 = (unsigned char)56;
int zero = 0;
unsigned short var_17 = (unsigned short)29808;
unsigned int var_18 = 1094411638U;
long long int var_19 = 1721959478145720109LL;
unsigned char var_20 = (unsigned char)43;
int var_21 = -170682549;
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
