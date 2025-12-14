#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-11842;
short var_2 = (short)12337;
short var_3 = (short)785;
short var_4 = (short)30938;
short var_5 = (short)-10439;
unsigned short var_8 = (unsigned short)64348;
unsigned int var_9 = 2611930341U;
short var_12 = (short)2961;
int zero = 0;
short var_16 = (short)21792;
unsigned char var_17 = (unsigned char)218;
void init() {
}

void checksum() {
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
