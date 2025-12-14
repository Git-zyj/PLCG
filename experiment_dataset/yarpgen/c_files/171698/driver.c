#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1709735253;
short var_4 = (short)-8641;
long long int var_5 = 1919630376589074411LL;
int var_9 = -2048086947;
unsigned int var_17 = 708713738U;
int zero = 0;
int var_20 = -1825611617;
short var_21 = (short)1788;
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
