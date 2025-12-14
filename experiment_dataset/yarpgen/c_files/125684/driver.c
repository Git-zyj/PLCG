#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7149768766616392166ULL;
unsigned long long int var_1 = 3827404077932901217ULL;
unsigned long long int var_3 = 10718931997120700409ULL;
unsigned char var_4 = (unsigned char)65;
long long int var_5 = 105683660780955969LL;
unsigned long long int var_8 = 11768151085514171367ULL;
long long int var_9 = 7047283518616343319LL;
short var_10 = (short)29252;
int zero = 0;
unsigned char var_11 = (unsigned char)170;
unsigned short var_12 = (unsigned short)18872;
unsigned long long int var_13 = 2240447655327204636ULL;
unsigned short var_14 = (unsigned short)42366;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
