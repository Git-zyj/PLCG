#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4006255551U;
short var_2 = (short)16043;
signed char var_6 = (signed char)-51;
long long int var_7 = -8511813829530582606LL;
unsigned long long int var_8 = 14676805626002208288ULL;
unsigned short var_9 = (unsigned short)65133;
int zero = 0;
unsigned int var_14 = 1413873782U;
unsigned char var_15 = (unsigned char)62;
unsigned short var_16 = (unsigned short)32617;
int var_17 = -2145020533;
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
