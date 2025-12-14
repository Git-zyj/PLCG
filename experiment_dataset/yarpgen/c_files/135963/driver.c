#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)111;
signed char var_5 = (signed char)37;
unsigned long long int var_8 = 1102519207790300050ULL;
unsigned char var_9 = (unsigned char)199;
int var_10 = -1028132674;
int zero = 0;
unsigned long long int var_14 = 5555975680183076071ULL;
signed char var_15 = (signed char)-15;
unsigned int var_16 = 2128174247U;
unsigned long long int var_17 = 12011525958984233450ULL;
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
