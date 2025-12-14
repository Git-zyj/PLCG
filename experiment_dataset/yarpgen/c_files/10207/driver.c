#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-28229;
unsigned short var_6 = (unsigned short)56708;
long long int var_7 = 4580013590515431182LL;
unsigned long long int var_11 = 4440449231407574379ULL;
unsigned int var_14 = 3781225901U;
int zero = 0;
short var_20 = (short)16298;
unsigned int var_21 = 1223682507U;
void init() {
}

void checksum() {
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
