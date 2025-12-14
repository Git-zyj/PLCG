#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -807761588;
signed char var_2 = (signed char)19;
unsigned int var_6 = 4026916715U;
long long int var_12 = 2352946253758349327LL;
unsigned int var_14 = 2405840781U;
unsigned short var_15 = (unsigned short)28188;
int zero = 0;
unsigned short var_18 = (unsigned short)29055;
unsigned int var_19 = 1658492245U;
signed char var_20 = (signed char)-23;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
