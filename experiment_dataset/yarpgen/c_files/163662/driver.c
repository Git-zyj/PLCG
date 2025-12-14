#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1595014768;
unsigned long long int var_4 = 15748358340780284165ULL;
unsigned char var_5 = (unsigned char)221;
unsigned char var_8 = (unsigned char)163;
int zero = 0;
signed char var_12 = (signed char)106;
int var_13 = -52599280;
signed char var_14 = (signed char)70;
unsigned int var_15 = 452870076U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
