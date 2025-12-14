#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 4016598439U;
short var_8 = (short)-23081;
int var_9 = 1574726405;
signed char var_12 = (signed char)-61;
int zero = 0;
unsigned char var_14 = (unsigned char)90;
unsigned char var_15 = (unsigned char)190;
unsigned char var_16 = (unsigned char)111;
long long int var_17 = 4851456382282811021LL;
int var_18 = -914204953;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
