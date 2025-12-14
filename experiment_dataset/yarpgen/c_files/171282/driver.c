#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)45;
unsigned short var_3 = (unsigned short)52212;
int var_5 = 116917127;
int var_10 = -1563000309;
int zero = 0;
short var_19 = (short)915;
signed char var_20 = (signed char)70;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
