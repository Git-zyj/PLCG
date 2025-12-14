#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -130912605074423496LL;
unsigned int var_1 = 1239297545U;
unsigned short var_2 = (unsigned short)24512;
unsigned short var_6 = (unsigned short)28595;
long long int var_7 = -2709292918010207820LL;
unsigned int var_8 = 2510980028U;
int zero = 0;
unsigned int var_12 = 1374066316U;
unsigned short var_13 = (unsigned short)34183;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
