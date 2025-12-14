#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33385;
unsigned int var_1 = 1948726242U;
short var_3 = (short)-28674;
unsigned long long int var_4 = 7122536859637821023ULL;
short var_6 = (short)-402;
unsigned int var_9 = 1771061890U;
int zero = 0;
unsigned short var_12 = (unsigned short)54843;
unsigned int var_13 = 3270814155U;
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
