#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48979;
short var_2 = (short)17127;
unsigned int var_7 = 1435893751U;
signed char var_9 = (signed char)-54;
int var_12 = 1902787220;
int zero = 0;
int var_14 = -2090434784;
signed char var_15 = (signed char)-90;
void init() {
}

void checksum() {
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
