#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 598405963U;
int var_6 = 874655565;
long long int var_12 = 5099426731594338116LL;
unsigned short var_14 = (unsigned short)29356;
int zero = 0;
signed char var_16 = (signed char)111;
int var_17 = -1485744379;
unsigned int var_18 = 862999610U;
unsigned int var_19 = 1425308513U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
