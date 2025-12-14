#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19478;
unsigned char var_1 = (unsigned char)43;
unsigned char var_2 = (unsigned char)137;
unsigned short var_3 = (unsigned short)39792;
int var_4 = 2036969984;
long long int var_5 = -8651014028453105975LL;
signed char var_7 = (signed char)127;
unsigned short var_9 = (unsigned short)29413;
signed char var_10 = (signed char)25;
int zero = 0;
int var_11 = -1405681432;
long long int var_12 = -4462163982978030354LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
