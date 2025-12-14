#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5260;
long long int var_1 = -6185384499318458629LL;
unsigned char var_2 = (unsigned char)252;
unsigned short var_5 = (unsigned short)17825;
signed char var_9 = (signed char)-77;
unsigned short var_10 = (unsigned short)40907;
short var_11 = (short)-4587;
int zero = 0;
signed char var_14 = (signed char)-3;
unsigned int var_15 = 1839695588U;
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
