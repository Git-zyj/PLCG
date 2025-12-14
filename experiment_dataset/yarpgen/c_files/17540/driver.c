#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 476566954863014035ULL;
short var_2 = (short)-15343;
unsigned int var_3 = 3239846475U;
unsigned short var_5 = (unsigned short)28381;
short var_7 = (short)-1355;
int zero = 0;
short var_10 = (short)-467;
short var_11 = (short)22191;
short var_12 = (short)1200;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
