#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 882964889U;
unsigned short var_8 = (unsigned short)27134;
int zero = 0;
unsigned long long int var_12 = 17483961474026971690ULL;
unsigned long long int var_13 = 10371903061153206091ULL;
unsigned long long int var_14 = 2660847376609382507ULL;
signed char var_15 = (signed char)76;
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
