#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)219;
unsigned short var_5 = (unsigned short)24375;
unsigned char var_7 = (unsigned char)145;
short var_9 = (short)-11411;
unsigned short var_12 = (unsigned short)34219;
signed char var_13 = (signed char)-26;
int zero = 0;
short var_14 = (short)-30433;
unsigned int var_15 = 2896563810U;
unsigned long long int var_16 = 4546002168154224998ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
